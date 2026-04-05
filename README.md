# 🏆 RFID Vehical Start System
### *Winner of the INSPIRE Award - MANAK (2023-24)*

Built with passion by **Naman Pahariya**, this project is an Arduino-powered smart ignition system that completely replaces traditional keys with secure RFID technology. 

This innovation was selected for the prestigious **INSPIRE Award of ₹10,000** by the **Department of Science & Technology (DST), Govt. of India**, and represented **St. Josephs Sr. Sec. School (Auraiya)** at the District Level Exhibition.

---

## 🎖 Recognition & Awards
- **INSPIRE Award - MANAK (2023-24)**: Recognized for preparation of a Science project/model for District Level Exhibition & Project Competitions (DLEPCs).
- **Grant Awarded**: ₹10,000 by the National Innovation Foundation - India.

---

## 💡 The Idea
Traditional keys are easy to lose and mechanical ignitions can be bypassed. This project solves that by using **Radio Frequency Identification (RFID)** to verify the owner's identity before starting the vehical's motor. It’s secure, fast, and feels like the future!

## 🚀 Features
- **⚡ Keyless Ignition**: Start or stop your vehical with a simple swipe of an RFID tag or card.
- **🛡️ Secure Access**: Only authorized UID tags (stored in the firmware) can activate the system.
- **🔌 High-Current Handling**: A relay-isolated circuit ensures the high-power starter motor doesn't damage the microcontroller.
- **🔋 Dual Power Support**: Runs on a 18650 Li-ion battery pack for consistent performance.

## 🛠️ Hardware Requirements
- **Arduino Uno** (The Brain)
- **MFRC522 RFID Reader**
- **5V Relay Module** (The Switch)
- **DC Motor** (Simulating the Starter)
- **7.4V Li-ion Battery Pack**
- **RFID Tags/Cards** (MIFARE Classic)

## 📡 Wiring Guide

| RFID Pin | Arduino Pin | | Relay Pin | Arduino Pin |
| :------- | :---------- | - | :-------- | :---------- |
| **VCC**  | 3.3V        | | **VCC**   | 5V          |
| **RST**  | Pin 9       | | **GND**   | GND         |
| **GND**  | GND         | | **IN**    | Pin 7       |
| **MISO** | Pin 12      | |           |             |
| **MOSI** | Pin 11      | |           |             |
| **SCK**  | Pin 13      | |           |             |
| **SDA**  | Pin 10      | |           |             |

---

## 💻 How to Use
1. **Clone the Repo**: Download this code to your computer.
2. **Library Setup**: Install the `MFRC522` library in your Arduino IDE.
3. **Configure UIDs**: Update `ok_rfid_1` and `ok_rfid_2` in `RFID_Vehical_Start_System.ino` with your tag's unique ID.
4. **Flash it!**: Upload the code and swipe to start your engine.

## 👨‍💻 Developed By
**Naman Pahariya**  
*Student of Class 9th*  
*St. Josephs Sr. Sec. School, Auraiya, Uttar Pradesh*

---
> "Innovating today for a smarter tomorrow." 🌟
