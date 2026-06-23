# Task 2 - Motor Control with PWM & Obstacle Detection

## Objective

To control the speed of a DC motor using PWM and automatically stop the motor when an obstacle is detected using an ultrasonic sensor.

## Components Used

* Arduino UNO
* PING))) Ultrasonic Sensor
* DC Motor
* Motor Driver
* Breadboard
* Jumper Wires

## Software Used

* Tinkercad Circuit Simulator
* Arduino IDE

## Working Principle

The ultrasonic sensor continuously measures the distance of nearby objects. Arduino reads the distance data and controls the DC motor using PWM. When the measured distance is greater than 20 cm, the motor runs. When an obstacle is detected within 20 cm, the motor automatically stops.

## Files Included

* Task2_Report.pdf
* motor_control.ino
* Screenshots Folder

## Output

The motor successfully operated using PWM speed control and automatically stopped when an obstacle was detected within the specified distance.

## Author
Naveena Kachakayala