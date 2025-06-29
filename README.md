# 🌿 Grow Pro – Smart Indoor Garden (Arduino)

Grow Pro is a smart garden system that automates plant care indoors using Arduino. It controls both a watering system and a sunlight management system based on sensor readings. Designed for low-maintenance indoor environments, Grow Pro helps ensure your plants receive just the right amount of water and light — automatically.

---

## ⚙️ Features

- 🌱 **Automated Watering System**  
  - Uses a soil moisture sensor to monitor soil levels  
  - Triggers a servo motor to deliver water when moisture drops below 60%

- ☀️ **Sunlight Management System**  
  - LED grow light strips simulate sunlight  
  - Light sensor detects room brightness and turns LEDs on/off to save energy

---

## 🔧 Tech Stack

- **Platform:** Arduino UNO  
- **Languages:** C++ (Arduino IDE)  
- **Hardware:** Soil moisture sensor, servo motor, LED strip lights, light sensor

---

## 🧪 How It Works

- The moisture sensor checks soil every cycle. If it's too dry, the servo opens the water valve.
- The light sensor reads room brightness; if it’s too dark, the LEDs switch on.
- Logic thresholds (like 60% soil moisture) are coded for automatic triggering.

---

## 📂 File Structure
├── main.ino # Controls logic and checks sensor input

├── motor.ino # Controls servo motor behavior for watering

└── README.md # You're here!


---

## 📺 Demo Video

[Watch on YouTube](https://www.youtube.com/watch?v=n1Q53r0m1p0&list=PL9Jjf9--iqvy8CFh4KCIsqp2ORImruB_i)

## 👨‍💻 Author

Chonglin Zhang, Jorge Caballero, Julia Pedrin, Hailey Cote   
*Project from C++ & Arduino (Fall 2022)*
