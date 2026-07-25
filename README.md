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


| Qty. | Item                                                      | Image                                                        | Description                                                  | Link                                                         | Price         |
| ---- | --------------------------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------- |
| 2    | [12V DC  encoder motor kit](./BOM/motor_kit.md)           | ![motor_encoder_wheel_kit](./assets/images/motor_encoder_wheel_kit.jpg) | 12V DC motor JGA25-371 with encoder, 130rpm reductor, 65mm wheel, coupling, mounting bracket | [Amazon](https://www.amazon.es/dp/B07WT22RNK?psc=1&ref=ppx_pop_dt_b_asin_title) | 30,33€        |
| 1    | [Raspberry Pi 4B](./BOM/RPi_4B.md)                        | ![raspberry-pi-4-modelo-b-4gb](./assets/images/raspberry-pi-4-modelo-b-4gb.jpg) |                                                              | [Amazon]()                                                   |               |
| 1    | [Arduino Nano V3](./BOM/arduino_nano.md)                  | ![arduino_nano](./assets/images/arduino_nano.jpg)            | AZDelivery Nano V3.0 with ATmega328 Chip CH340 soldered version with USB cable (Arduino Nano V3 clone) | [Amazon](https://www.amazon.es/gp/product/B01MS7DUEM/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&th=1) | 18,99€        |
| 1    | Arduino Nano Shell                                        | ![arduino_shell](./assets/images/arduino_shell.jpg)          |                                                              | [Amazon](https://www.amazon.es/gp/product/B08T1ZXS7K/ref=ppx_yo_dt_b_asin_title_o00_s01?ie=UTF8&th=1) | 6,99€         |
| 1    | [L298N Motor driver](./BOM/motor_driver.md)               | ![motor_driver](./assets/images/motor_driver.jpg)            |                                                              | [Amazon](https://www.amazon.es/gp/product/B077NY9RY6/ref=ppx_yo_dt_b_asin_title_o00_s01?ie=UTF8&psc=1) | 9,99€ (2 uds) |
| 1    | [35W Buck-Boost DC Converter](./BOM/buck_converter.md)    | ![buck_converter](./assets/images/buck_converter.jpg)        | ARCELI Buck-Boost Converter with display, DC 5.5-30V 12v to DC 0.5-30V  35W | [Amazon](https://www.amazon.es/gp/product/B07MY399GQ/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1) | 12,99€        |
| 1    | [5" 800x480 Resistive  Touchscreen](./BOM/touchscreen.md) | ![touchscreen](./assets/images/5inch-HDMI-LCD-B-intro.jpg)   | Waveshare 5" HDMI LCD 800x480 Resistive Touchscreen TFT Display  with Case for Raspberry Pi 4 | [Amazon](https://www.amazon.es/dp/B07PLF8V8Y?psc=1&ref=ppx_pop_dt_b_product_details) | 52,99€        |
| 1    | [DTOF Lidar LD06](./BOM/LD06-lidar.md)                    | ![LD06-lidar](./assets/images/LD06-lidar.jpg)                | LD06 Lidar, came bundled with Minipupper                     | [Amazon](https://www.amazon.es/innomaker-integrado-omnidireccional-resistencia-LiDAR_LD06/dp/B08GJJX41D/ref=cm_cr_arp_d_product_top?ie=UTF8) | 99,99€        |
| 1    | [Pi Camera](./BOM/pi_camera.md)                           | ![pi_camera](./assets/images/pi_camera.jpg)                  | Pi Camera v1.3 with acrilic support                          |                                                              |               |
| 1    | [Gamepad](./BOM/gamepad.md)                               | ![](./assets/images/gamepad.jpg)                             | PS4-compatible Bluetooth game controller. Mine came bundled with Minipupper | [Fnac](https://www.fnac.es/mp8198387/Mando-USB-con-cable-Smart-Gamepad-para-PC-PS4/w-4?oref=98dfe269-3c11-af3c-116a-61fe4db3ab7a) | 17,90€        |
| 1    | [Chassis](./BOM/chassis.md)                               | ![](./assets/images/storage_box.png)                         | Based on a 29 x 19 x 12.4 cm Keeeper Hubert + Hilda plastic storage box with tray, used for the chassis of the robot. I purchased mine in the local Leroy Merlin. | [Amazon](https://www.amazon.de/keeeper-Hubert-Hilda-Storage-Transparent/dp/B092JKYLW5?ref_=ast_sto_dp) | 8,63€         |
| 1    | [Battery](./BOM/battery.md)                               | ![](./assets/images/HRB_battery.png)                         | HRB Battery RC LiPo 5000mAh 11.1V 3S 50C XT60 Connector with 4 adapter parts. 308 g. | [Amazon](https://www.amazon.es/gp/product/B086JP7PCC/)       | 35,99€        |
| 1    | Balance charger                                           | ![](./assets/images/balance_charger.png)                     | WANGCL IMAX B6AC Lipo Battery charger B6 80W Digital LCD Lipo Cargador  11-18V con adaptador para plomo ácido NI-CD/NI-MH 1-6S LI-PO | [Amazon](https://www.amazon.es/gp/product/B0B3GM8KX9/)       | 42,9                                                                                                                                                                      
