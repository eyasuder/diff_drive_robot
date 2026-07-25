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
| Raspberry Pi 4 |![raspberry-pi-4-modelo-b-4gb](<img width="709" height="540" alt="Raspberry pi 4" src="https://github.com/user-attachments/assets/7747e986-11b3-410f-b11d-8f0e9b1ee757" />) | Main onboard computer |
| Arduino Mega 2560 |  | Low-level motor controller |
| 2D LiDAR | | Environment scanning |
| Motor Driver | |Controls DC motors |
| DC Geared Motors (with encoders) | | | Robot locomotion |
| Caster Wheel | | Robot support |
| 3S LiPo Battery | | Power source |
| DC-DC Buck Converter | | 5V supply for electronics |
| Robot Chassis | | Mechanical structure |

---
