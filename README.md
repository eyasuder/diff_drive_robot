<img width="3000" height="2403" alt="Wiring_diagram" src="https://github.com/user-attachments/assets/14f63887-19e5-48a8-81a1-df9b6b9a4f59" />
# 2D LiDAR-Based SLAM and Navigation2 for a Differential Drive Robot

## 📌 Overview

This repository contains autonomous navigation of a differential drive mobile robot using **ROS 2 Humble**. The robot uses a **2D LiDAR (Slamtec RPLIDAR A1)** for Simultaneous Localization and Mapping (SLAM) and **Navigation2 (Nav2)** for localization, path planning, obstacle avoidance, and autonomous navigation.
The project has been validated in both **Gazebo simulation** and on a **real hardware platform**. 

---

## Project Features:
- Differential drive robot
- ROS 2 Humble
- URDF/Xacro robot description
- 2D LiDAR integration, Camera and Depth Camera
- SLAM using SLAM Toolbox
- Autonomous navigation using Navigation2
- Obstacle avoidance
- Gazebo Fortress simulation
- Real robot implementation
  
---

# Hardware Implementation

## 🛠 Hardware Components

|Roll No.|           Component                |                 Image                                                                   |      Description   |
|--------|------------------------------------|-----------------------------------------------------------------------------------------|--------------------|
|    1   | Raspberry Pi 4                     | <img width="250" height="150" alt="Raspberry_pi_4" src="https://github.com/user-attachments/assets/1461957e-ee82-4077-a8de-702d60fd988e" />| Main onboard computer |
|    2   | Arduino Mega 2560                  |  <img width="250" height="150" alt="Arduino_mega_2560" src="https://github.com/user-attachments/assets/3fe2205a-fec8-4354-97e8-073e0eb2ebe0" />| Low-level motor controller |
|    3   | 2D LiDAR                           |  <img width="250" height="200" alt="Rplidar_a1" src="https://github.com/user-attachments/assets/18c28454-bf2a-4b05-8141-427e09944dba" />| Environment perception |
|    4   | L298N Motor Driver                 | <img width="250" height="150" alt="L298N_motor_driver" src="https://github.com/user-attachments/assets/347fa109-fdf1-4d04-91b9-b0545e204653" />| DC motors controls |
|    5   | DC Geared Motors (with encoders)   | <img width="250" height="150" alt="Encoder_DC_motor" src="https://github.com/user-attachments/assets/1dd8f8f5-4824-4c84-b992-e53ab67a300a" />| Two 12V 130rpm geared dc motors |
|    6   | Caster Wheel                       | <img width="100" height="100" alt="Castor_wheel" src="https://github.com/user-attachments/assets/891c209c-a808-40c5-adf4-ad78c78cb3b9" /> | Robot support |
|    7   | 3S LiPo Battery                    | <img width="250" height="150" alt="Lipo_battery" src="https://github.com/user-attachments/assets/cf80ed37-cf84-459b-965b-7883316b0dcb" />| 5000 mAh 11.1v 3S Lipo battery for powering the robot |
|    8   | DC-DC Buck Converter               | <img width="250" height="250" alt="DC_to_DC_converter" src="https://github.com/user-attachments/assets/2e1bad29-4a95-48f9-ba60-7b4ab211d58c" />| High-power step-down XL4015 5A 75W variable DC converter 5v supply for electronics |
|    9   | Robot Chassis                      |                                                                                         | Mechanical structure |
|    9   |Gamepad controller                  | <img width="250" height="200" alt="Remote_controller" src="https://github.com/user-attachments/assets/cead70fe-f49a-4d31-8b58-74cfb9bdf9f7" />| Xbox Microsoft 4th generation wireless controller for remote control |

---

## Motor Wiring and Differential Drive Robot Hardware Platform
<p align="center">
<img width="3000" height="2403" alt="Wiring_diagram" src="https://github.com/user-attachments/assets/b5c21228-4f27-41d2-aab6-c3036bb37daa" />
<img width="500" height="400" alt="DiffDrive_robot" src="https://github.com/user-attachments/assets/5ead0c9a-fbc2-4cf2-be0a-fb20b22cb9e7" />
</p>

---
## Arduino Pin Configuration

# 🧠 Software Stack

## Software Requirements

- Ubuntu 22.04
- ROS 2 Humble
- Gazebo Fortress
- RViz2
- Navigation2
- SLAM Toolbox
