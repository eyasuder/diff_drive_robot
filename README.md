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

#Hardware Implementation

## 🛠 Hardware Components

|Roll No.|           Component                |                 Image                                                                   |      Description   |
|--------|------------------------------------|-----------------------------------------------------------------------------------------|--------------------|
|    1   | Raspberry Pi 4                     | <img width="250" height="150" alt="Raspberry_pi_4" src="https://github.com/user-attachments/assets/1461957e-ee82-4077-a8de-702d60fd988e" />| Main onboard computer |
|    2   | Arduino Mega 2560                  |  <img width="250" height="150" alt="Arduino_mega_2560" src="https://github.com/user-attachments/assets/3fe2205a-fec8-4354-97e8-073e0eb2ebe0" />| Low-level motor controller |
|    3   | 2D LiDAR                           |  <img width="250" height="200" alt="Rplidar_a1" src="https://github.com/user-attachments/assets/18c28454-bf2a-4b05-8141-427e09944dba" />| Environment perception |
|    4   | L298N Motor Driver                 | <img width="250" height="150" alt="L298N_motor_driver" src="https://github.com/user-attachments/assets/347fa109-fdf1-4d04-91b9-b0545e204653" />| DC motors controls |
|    5   | DC Geared Motors (with encoders)   | <img width="250" height="150" alt="Encoder_DC_motor" src="https://github.com/user-attachments/assets/1dd8f8f5-4824-4c84-b992-e53ab67a300a" />| Two 12V 130rpm geared dc motors |
|    6   | Caster Wheel                       |                                                                                         | Robot support |
|    7   | 3S LiPo Battery                    |                                                                                         | Power source   |
|    8   | DC-DC Buck Converter               |                                                                                         | 5V supply for electronics |
|    9   | Robot Chassis                      |                                                                                         | Mechanical structure |

---
