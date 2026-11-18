# IoT-Based Abnormal Vibration Detection Using KiwisIoT

## Project Overview

This project detects abnormal vibrations in machinery using IoT technology. An ESP8266 NodeMCU collects vibration data through a vibration sensor and sends the readings to the KiwisIoT platform for remote monitoring. It helps identify unusual machine movements and supports equipment safety and maintenance.

## Hardware Components

- ESP8266 NodeMCU
- Vibration Sensor
- Jumper Wires
- Power Supply
- Equipment / Motor for Monitoring

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

Sensor connections depend on the hardware configuration used in the project.

## Working Principle

The vibration sensor detects machine vibrations and sends signals to the ESP8266 NodeMCU. The controller processes the sensor readings and transmits the information to the KiwisIoT platform. When abnormal vibration is detected, the system can generate a warning for remote monitoring.

## KiwisIoT Dashboard

The dashboard displays vibration readings and equipment status for remote monitoring.

| Data              | Description                 |
| ----------------- | --------------------------- |
| Vibration Reading | Detected vibration data     |
| Equipment Status  | NORMAL / WARNING            |
| Monitoring        | Real-time vibration updates |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor abnormal vibrations through the KiwisIoT dashboard.

## Applications

- Industrial vibration monitoring
- Motor condition monitoring
- Abnormal movement detection
- Equipment fault monitoring
- Predictive maintenance systems

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/iot-based-abnormal-vibration-detection-using-kiwisiot-c4ad61](https://www.hackster.io/harispidy07/iot-based-abnormal-vibration-detection-using-kiwisiot-c4ad61)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, Vibration Sensor, and KiwisIoT for smart abnormal vibration detection._
