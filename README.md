# 🚀 Mecanum Wheel Based Robotic Arm
<p align="center"> <img src="images/poster.jpeg" width="800"/> </p>

## 📌 Overview

This project is a mobile robotic manipulation system that combines a Mecanum wheel-based omnidirectional drive platform with a 4-DOF robotic arm.

The system is designed to automate repetitive material handling tasks while overcoming the mobility limitations of traditional stationary robotic arms.

The Mecanum wheels enable full 360° motion including:

Forward / Backward

Sideways (Crab Motion)

Diagonal Movement

In-place Rotation

All without changing chassis orientation.

## 🎯 Problem Statement

Conventional robotic arms are fixed in position and require manual repositioning for task flexibility. This limits operational efficiency in dynamic environments.

This project integrates mobility and manipulation into a single system, enabling:

Dynamic repositioning

Improved task flexibility

Efficient space utilization

Automated repetitive operations

## 🛠️ System Architecture
### 🔹 Hardware Components

2 × Arduino Uno

4 × Mecanum Wheels

4 × Servo Motors (4 Degrees of Freedom)

L293D Motor Driver Module

Independent Battery Supply

Custom Mechanical Chassis

### 🔹 Functional Distribution

Arduino 1 → Controls Mecanum wheel drive system

Arduino 2 → Controls robotic arm movement and gripping mechanism

This dual-controller architecture improves modularity, simplifies debugging, and ensures stable performance during simultaneous locomotion and manipulation.

## 🔧 Hardware Implementation
<p align="center"> <img src="images/hardware.jpeg" width="600"/> </p>

Visible in the image:

Dual Arduino Uno configuration

L293D motor driver for wheel control

Independent battery supply for motors and logic

Servo-mounted 4-DOF articulated arm

Mecanum wheels enabling omnidirectional mobility

## ⚙️ Features

Omnidirectional motion capability

4 Degrees of Freedom arm manipulation

Independent control architecture

PWM-based motor speed control

Modular hardware-software design

Designed for automation of repetitive tasks

## 🧠 Working Principle
### 🔹 Mecanum Wheel Kinematics

Each wheel contains rollers mounted at 45°. By varying individual wheel speeds and directions:

Equal forward rotation → Forward motion

Opposite side rotation → Sideways motion

Diagonal combinations → Diagonal translation

Opposite corner rotation → Rotation in place

This allows full planar mobility without steering mechanisms.

### 🔹 Arm Control Logic

Servo motors controlled using PWM signals

Each joint independently controlled

Gripper operation synchronized with positioning

Sequential movement logic implemented for task execution

## 🏆 Project Demonstration
<p align="center"> <img src="images/presentation.jpeg" width="700"/> </p>

The project was successfully demonstrated at a technical competition, showcasing real-time control, mobility precision, and task execution capability.

## 📊 Applications

Industrial material handling

Warehouse automation

Hazardous environment operations

Construction & civil engineering task assistance

Repetitive object transfer systems

## 🔬 Future Improvements

Upgrade to ESP32 for wireless control

Implement inverse kinematics for precise positioning

Add computer vision for object detection

Integrate IoT-based monitoring & telemetry

Improve structural rigidity and payload capacity

## 🏗️ Project Type

Academic + Applied Robotics Prototype
