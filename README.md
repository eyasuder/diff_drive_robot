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

|           Component                |                 Image                                                                   |      Description   |
|------------------------------------|-----------------------------------------------------------------------------------------|--------------------|
| Raspberry Pi 4                     | <img width="250" height="250" alt="Raspberry_pi_4" src="https://github.com/user-attachments/assets/1461957e-ee82-4077-a8de-702d60fd988e" />   | Main onboard computer |
| Arduino Mega 2560                  |                                                                                         | Low-level motor controller |
| 2D LiDAR                           |                                                                                         | Environment scanning |
| Motor Driver                       |                                                                                         |Controls DC motors |
| DC Geared Motors (with encoders)   |                                                                                         | Robot locomotion |
| Caster Wheel                       |                                                                                         | Robot support |
| 3S LiPo Battery                    |                                                                                         | Power source   |
| DC-DC Buck Converter               |                                                                                         | 5V supply for electronics |
| Robot Chassis                      |                                                                                       | Mechanical structure |

---
