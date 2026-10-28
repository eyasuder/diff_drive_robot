#include "sensor_covariance_nodes/imu_covariance_node.hpp"

#include <functional>

namespace sensor_covariance_nodes
{

ImuCovarianceNode::ImuCovarianceNode()
: Node("imu_covariance_node")
{
  // ROS topic names are case-sensitive. Default is /imu; override input_topic
  // if your actual topic is /Imu.
  input_topic_ = declare_parameter<std::string>("input_topic", "/imu");
  output_topic_ = declare_parameter<std::string>("output_topic", "/imu_with_covariance");

  // IMU covariance diagonal order: x, y, z for each 3x3 matrix.
  // For a planar robot, yaw and gyro-z are the main values commonly fused.
  // Example variances only; calibrate these for your simulated/real sensor.
  orientation_covariance_diagonal_ = {
    declare_parameter<double>("orientation_var_roll", 1000000.0),
    declare_parameter<double>("orientation_var_pitch", 1000000.0),
    declare_parameter<double>("orientation_var_yaw", 0.05)
  };

  angular_velocity_covariance_diagonal_ = {
    declare_parameter<double>("angular_velocity_var_x", 1000000.0),
    declare_parameter<double>("angular_velocity_var_y", 1000000.0),
    declare_parameter<double>("angular_velocity_var_z", 0.02)
  };

  linear_acceleration_covariance_diagonal_ = {
    declare_parameter<double>("linear_acceleration_var_x", 1000000.0),
    declare_parameter<double>("linear_acceleration_var_y", 1000000.0),
    declare_parameter<double>("linear_acceleration_var_z", 1000000.0)
  };

  publisher_ = create_publisher<sensor_msgs::msg::Imu>(output_topic_, 10);
  subscription_ = create_subscription<sensor_msgs::msg::Imu>(
    input_topic_, rclcpp::SensorDataQoS(),
    std::bind(&ImuCovarianceNode::imu_callback, this, std::placeholders::_1));

  RCLCPP_INFO(
    get_logger(), "Subscribing to '%s'; publishing covariance-adjusted IMU on '%s'",
    input_topic_.c_str(), output_topic_.c_str());
}

void ImuCovarianceNode::set_covariance_diagonal(
  std::array<double, 9> & covariance,
  const std::array<double, 3> & diagonal)
{
  covariance.fill(0.0);
  for (std::size_t i = 0; i < diagonal.size(); ++i) {
    covariance[i * 3 + i] = diagonal[i];
  }
}

void ImuCovarianceNode::imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
{
  auto output = *msg;
  set_covariance_diagonal(
    output.orientation_covariance, orientation_covariance_diagonal_);
  set_covariance_diagonal(
    output.angular_velocity_covariance, angular_velocity_covariance_diagonal_);
  set_covariance_diagonal(
    output.linear_acceleration_covariance, linear_acceleration_covariance_diagonal_);
  publisher_->publish(output);
}

}  // namespace sensor_covariance_nodes

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<sensor_covariance_nodes::ImuCovarianceNode>());
  rclcpp::shutdown();
  return 0;
}
