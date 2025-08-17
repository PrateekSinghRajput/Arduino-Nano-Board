# 🌱 Arduino Nano Environmental Monitor 🚀  

A compact and versatile **Arduino Nano** project integrating sensors, a **16x2 LCD display**, and **Bluetooth communication** for real-time environmental monitoring 📡. Perfect for **Beginners**, hobbyists, and embedded systems enthusiasts.  

---

## 📋 Table of Contents  
- [📖 About](#-about)  
- [✨ Features](#-features)  
- [🛠️ Hardware Components](#️-hardware-components)  
- [🔧 Installation](#-installation)  
- [🚀 Usage](#-usage)  
- [🤝 Contributing](#-contributing)  

---

## 📖 About  
This project uses an **Arduino Nano microcontroller** with:  
- **DHT11 sensor** for temperature 🌡️ & humidity 💧  
- **16x2 LCD display (via I2C)** for real-time monitoring 📺  
- **Bluetooth module (HC-05/HC-06)** to wirelessly transmit data 📲  

It’s simple, modular, and tailored for **IoT applications** in home automation, weather stations, or environmental data logging.  

---

## ✨ Features  
✅ Real-time **temperature & humidity** monitoring  
✅ Display readings on a **16x2 LCD** 
✅ Wireless **Bluetooth transmission** to phone/PC  
✅ Compact & low-power design 🎛️  
✅ **Beginner-friendly Arduino code** with modular sensor integration  

---

## 🛠️ Hardware Components  
- ⚡ Arduino Nano Board  
- 🌡️ DHT11 Temperature & Humidity Sensor  
- 📟 16x2 LCD Display + I2C Module  
- 📡 Bluetooth Module **(HC-05 / HC-06)**  
- 🔌 Jumper Wires  

---

## 🔧 Installation  

1. **Hardware Setup**  
   - Connect the **DHT11**, **LCD (16x2)**, and **Bluetooth** to your **Arduino Nano**.  
   - (Refer to the wiring diagram in this repo 🖇️).  

2. **Software Setup**  
   - Install [Arduino IDE](https://www.arduino.cc/en/software) 💻  
   - Open the main **.ino** sketch file in Arduino IDE  
   - Install required libraries via **Library Manager**:  
     - `DHT`  
     - `LiquidCrystal_I2C`  

3. **Upload**  
   - In Arduino IDE:  
     - Select **Board:** Arduino Nano  
     - Select correct **COM Port**  
   - Upload the sketch ✔️  

---

## 🚀 Usage  
1. Power up the **Arduino Nano** (USB or external supply 🔋).  
2. The **LCD** displays **Temperature & Humidity** in real time.  
3. Pair your **phone/PC** with the **Bluetooth module (HC-05/HC-06)**.  
4. Open a **Bluetooth Terminal App** 📲 → live environmental data streaming!  

---

## 🤝 Contributing  
Contributions are always welcome 💡!  
---
1. Fork the repository  
2. Create a feature branch (`git checkout -b feature-name`)  
3. Commit your changes (`git commit -m 'Add some feature'`)  
4. Push to the branch (`git push origin feature-name`)  
5. Open a Pull Request  

Please ensure your code follows the existing style and includes comments where necessary.

---

Made with ❤️ and Arduino magic!


![IMG_5038](https://github.com/user-attachments/assets/6b2241b6-ae19-4d76-a6ea-8075b42dc6e4)

