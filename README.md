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

| Component | Image | Description |
|-----------|-------------|
| Raspberry Pi 4 | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/c69bf84b-44c2-4bff-bb7c-dedbf90af7c4" />
 | Main onboard computer |
| Arduino Mega 2560 | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/1a8fb42c-646e-4b56-b20e-a6b2c86b4e87" />
 | Low-level motor controller |
| 2D LiDAR | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/c2ff87a4-668d-4187-8807-9beb5b802148" />
 | Environment scanning |
| Motor Driver | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/53f8d551-38c0-4b28-b4a5-37fd40f01c19" />
 |Controls DC motors |
| DC Geared Motors (with encoders) | | | Robot locomotion |
| Caster Wheel | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/891e6ff6-6833-4d58-b47e-ad73120d8848" />
 | Robot support |
| 3S LiPo Battery | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/430286a9-d0d5-47d2-8ced-d27f4a6b2907" />
 | Power source |
| DC-DC Buck Converter | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/faf57925-fe41-417e-92e5-1ffef91824d4" />
 | 5V supply for electronics |
| Robot Chassis | <img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/6784e6a8-2629-4ceb-9852-0f84851a223e" />
 | Mechanical structure |

---
