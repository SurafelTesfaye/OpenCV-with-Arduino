# **Opencv-face-with-Arduino**

## **Project Overview**
This project demonstrates controlling an LED connected to an Arduino Uno microcontroller using face detection with OpenCV. When a face is detected, the LED blinks. This simple yet effective demonstration showcases the integration of computer vision and hardware control.

## **Demonstration**
A video demonstration of this project can be found on YouTube: [Opencv-face-with-Arduino Demo](https://www.youtube.com/watch?v=Zhuh3iWxCHI)

## **Repository Contents**
- `face_detection.py`: Python script for face detection using OpenCV.
- `arduino_control.ino`: Arduino sketch for LED control.
- `haarcascade_frontalface_default.xml`: Haar Cascade file for face detection.
- `haarcascade_eye.xml`: Haar Cascade file for eye detection.

## **Setup and Requirements**
- **Hardware**: Arduino Uno, LED, connecting wires.
- **Software**: Python, OpenCV, Arduino IDE.
- **Libraries**: cv2 (OpenCV), numpy, serial.

## **Python Script (face_detection.py)**
The script uses OpenCV for face and eye detection. When a face is detected, it sends a signal to the Arduino to turn the LED on. If no face is detected, the LED turns off.
