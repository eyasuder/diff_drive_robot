# sensor_covariance_nodes (ROS 2 Humble)

Two independent C++ ROS 2 nodes that copy incoming messages, populate configurable **diagonal covariance matrices**, and publish the modified messages on separate output topics.

- `odom_covariance_node`: `/diff_cont/odom` -> `/odom_with_covariance`
- `imu_covariance_node`: `/imu` -> `/imu_with_covariance`

The input messages are not modified in place. The nodes preserve timestamps, frame IDs, poses, twists, and sensor measurements; they replace covariance arrays only.

## 1. Create/build

Put this package inside your ROS 2 workspace, for example `~/diff_robot/src/sensor_covariance_nodes`.

```bash
cd ~/diff_robot/src
# Extract/copy this package here if you downloaded the ZIP.
cd ~/diff_robot
source /opt/ros/humble/setup.bash
colcon build --packages-select sensor_covariance_nodes
source install/setup.bash
```

## 2. Run each node

Terminal 1:

```bash
ros2 run sensor_covariance_nodes odom_covariance_node --ros-args --params-file ~/diff_robot/src/sensor_covariance_nodes/config/odom_covariance.yaml
```

Terminal 2:

```bash
ros2 run sensor_covariance_nodes imu_covariance_node --ros-args --params-file ~/diff_robot/src/sensor_covariance_nodes/config/imu_covariance.yaml
```

Adjust the package path if you put it in another workspace.

**Topic names are case-sensitive.** The IMU default is `/imu` based on the current setup. If your actual topic is `/Imu`, change `input_topic` in `config/imu_covariance.yaml` to `/Imu`.

## 3. Connect EKF to the new output topics

In your `robot_localization` EKF YAML, change only the input topic names:

```yaml
odom0: /odom_with_covariance
imu0: /imu_with_covariance
```

Keep your existing `odom0_config` and `imu0_config` under review; covariance values do not determine which state variables are fused. The corresponding config arrays determine that. Restart the EKF after changing its YAML.

Do not remap `/odom_with_covariance` back onto `/diff_cont/odom` or `/imu_with_covariance` back onto `/imu`; that can create a feedback loop. The EKF's filtered output should remain a separate topic such as `/odom`.

## 4. Inspect

```bash
ros2 topic info /odom_with_covariance
ros2 topic echo /odom_with_covariance --once
ros2 topic echo /imu_with_covariance --once
```

In an Odometry message, covariance arrays are row-major 6x6 matrices. In an Imu message, each covariance array is row-major 3x3. These nodes create diagonal matrices, so all off-diagonal terms are zero.

## 5. Important covariance notes

- A covariance entry is a **variance**, not a standard deviation. For example, variance `0.02` corresponds to standard deviation about `0.141` in the relevant units.
- The numbers in the YAML files are example starting values, **not calibrated measurements**. Tune them using repeated trials or known simulator sensor-noise settings. A smaller variance tells the EKF to trust that measurement more; a larger variance tells it to trust it less.
- `1e6` is used for dimensions intentionally treated as unavailable by these example configs. Do not fuse those dimensions in the EKF. For a planar robot, normally begin with wheel `vx` and `vyaw`, plus IMU gyro `vyaw`; consider IMU yaw orientation only after checking its reference frame and behavior. Do not fuse linear acceleration unless you have a reason and suitable covariance.
- The nodes overwrite covariance fields on every message. They do not estimate covariance from data and do not reduce drift by themselves; they only provide covariance metadata to the EKF.
- The incoming `/diff_cont/odom` and `/imu` messages can continue to be used by other subscribers unchanged.
