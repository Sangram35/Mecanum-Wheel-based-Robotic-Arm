# Mecanum Wheel-Based Robotic Arm  

## Overview  
The **Mecanum Wheel-Based Robotic Arm** is a robotic system designed for **precise object manipulation along with automation of repititive tasks and omnidirectional movement**. It features **two Arduino Uno boards**, where one controls the **locomotion** using Mecanum wheels, and the other manages the **robotic arm with 4 degrees of freedom (DOF)**. This project is suitable for applications in **automation, material handling, and robotics research**.  

## Features  
- **Omnidirectional Movement** – Mecanum wheels enable movement in any direction, including sideways and diagonal motion.  
- **Dual Arduino Control** – One Arduino handles movement control, while another operates the robotic arm.  
- **4 DOF Robotic Arm** – Capable of grabbing, lifting, and placing objects with precision.  
- **Software Control Interface** – The robotic system is operated via a custom software interface.  
- **Manual & Autonomous Modes** – Supports both pre-programmed operations and remote-controlled functionality.  

---

## Hardware Requirements  
To build this project, the following components are required:  
- **2x Arduino Uno**  
- **4x Mecanum Wheels with DC Motors**  
- **Motor Driver Modules (L298N or equivalent)**  
- **4x Servo Motors** (for robotic arm movement)  
- **Power Supply (Li-ion battery pack or suitable source)**  

---

## Software Requirements  
Ensure the following software and libraries are installed:  
- **Arduino IDE** (for programming the Arduino boards)  
- **Required Libraries** (install via Arduino Library Manager):  
  - `Servo.h` – Controls servo motors  
  - `SoftwareSerial.h` – Enables serial communication  
  - Additional motor control libraries if required  
