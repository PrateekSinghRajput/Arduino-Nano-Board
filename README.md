# Arduino Nano Board 🚀

A compact and versatile Arduino Nano-based project integrating sensors, a 16x2 LCD display, and Bluetooth communication for real-time environmental monitoring and IoT applications.

---

## Table of Contents 📋

- [About](#about)
- [Features](#features)
- [Hardware Components](#hardware-components)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

---

## About

This project uses an Arduino Nano microcontroller to interface with various sensors (like DHT11 for temperature and humidity), a 16x2 LCD display (via I2C), and a Bluetooth module (HC-05/HC-06) to monitor and transmit environmental data wirelessly. It is ideal for beginners and hobbyists interested in IoT and embedded systems.

---

## Features ✨

- Real-time temperature and humidity monitoring  
- Display sensor data on a 16x2 LCD via I2C  
- Wireless data transmission using Bluetooth  
- Compact design suitable for various embedded applications  
- Easy-to-understand Arduino code with modular sensor integration  

---

## Hardware Components 🛠️

- Arduino Nano Board  
- DHT11 Temperature and Humidity Sensor  
- 16x2 LCD Display with I2C Module  
- Bluetooth Module (HC-05 or HC-06)  
- Connecting wires and breadboard  

---

## Installation 🔧

1. **Wiring:** Connect sensors, LCD, and Bluetooth module to the Arduino Nano following the wiring diagram provided in the repository.  
2. **Software:**  
   - Download and install [Arduino IDE](https://www.arduino.cc/en/software).  
   - Clone this repository or download the code files.  
   - Open the main `.ino` sketch file in Arduino IDE.  
   - Install required libraries (e.g., `DHT`, `LiquidCrystal_I2C`) via the Library Manager.  
3. **Upload:** Select the correct board and COM port, then upload the sketch to your Arduino Nano.

---

## Usage 🚀

- Power the Arduino Nano via USB or external power supply.  
- The LCD will display live sensor readings.  
- Pair your Bluetooth-enabled device with the HC-05/HC-06 module to receive sensor data wirelessly.  
- Use any serial Bluetooth terminal app on your smartphone or PC to view transmitted data.

---

## Contributing 🤝

Contributions are welcome! Please follow these steps:  

1. Fork the repository  
2. Create a feature branch (`git checkout -b feature-name`)  
3. Commit your changes (`git commit -m 'Add some feature'`)  
4. Push to the branch (`git push origin feature-name`)  
5. Open a Pull Request  

Please ensure your code follows the existing style and includes comments where necessary.

---

Made with ❤️ and Arduino magic!


![IMG_5038](https://github.com/user-attachments/assets/6b2241b6-ae19-4d76-a6ea-8075b42dc6e4)

