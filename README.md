# 🏆 RFID Vehicle Start System
### [cite_start]*Official Winner of the INSPIRE Award - MANAK (2023-24)* [cite: 22, 30]

[cite_start]Developed by **Naman Pahariya**[cite: 28], this project is an Arduino-based smart ignition security system designed to replace traditional mechanical keys with encrypted **Radio Frequency Identification (RFID)** verification. [cite_start]This innovation was selected by the **Department of Science & Technology (DST), Govt. of India** [cite: 19, 33][cite_start], for a **₹10,000 grant** [cite: 30] [cite_start]and recognized for the District Level Exhibition[cite: 30].

---

## 🎖 Recognition & Awards
* [cite_start]**Award Program**: INSPIRE Awards - MANAK (Million Minds Augmenting National Aspiration and Knowledge)[cite: 22, 23].
* [cite_start]**Grant Awarded**: ₹10,000 by the National Innovation Foundation - India[cite: 19, 30].
* [cite_start]**Official Reference No.**: 23UP4704713[cite: 26].
* **Institution**: St. Joseph's Sr. Sec. [cite_start]School, Auraiya[cite: 29].

---

## 💡 Project Overview
Mechanical ignitions are vulnerable to physical bypassing and key loss. This project introduces a secure **Keyless Ignition** layer that verifies a user's unique 13.56MHz tag ID before allowing the engine (simulated by a DC motor) to draw power.

## 🚀 Key Features
* **⚡ Keyless Ignition**: Start or stop your vehicle with a simple swipe of an authorized RFID tag.
* [cite_start]**🛡️ Secure Access**: Only pre-authorized UID tags stored in the firmware can activate the system[cite: 3, 14].
* [cite_start]**🔌 Isolated Power Circuit**: Uses a 5V Relay to separate the logic circuit (Arduino) from the high-current load (Motor)[cite: 10, 11].
* **🔋 Portable Power**: Optimized to run on a **7.4V 18650 Li-ion battery pack**.

---

## 🛠️ Hardware Stack
* [cite_start]**Microcontroller**: Arduino Uno[cite: 1].
* [cite_start]**Sensor**: MFRC522 RFID Reader (SPI Interface)[cite: 2, 6].
* [cite_start]**Actuator**: 5V Single-Channel Relay[cite: 10].
* **Load**: DC Motor.
* **Power**: 2x 18650 Li-ion Cells.

## [cite_start]📡 Wiring Configuration [cite: 1, 3, 4]

| RFID Pin | Arduino Pin | Function | | Relay Pin | Arduino Pin |
| :--- | :--- | :--- | - | :--- | :--- |
| **VCC** | 3.3V | Power | | **VCC** | 5V |
| **RST** | Pin 9 | Reset | | **GND** | GND |
| **GND** | GND | Ground | | **IN** | Pin 7 |
| **MISO** | Pin 12 | SPI MISO | | | |
| **MOSI** | Pin 11 | SPI MOSI | | | |
| **SCK** | Pin 13 | SPI Clock | | | |
| **SDA (SS)** | Pin 10 | SPI SS | | | |

---

## 💻 Software Setup
1.  [cite_start]**Install Libraries**: Ensure the `MFRC522.h` and `SPI.h` libraries are installed in your Arduino IDE[cite: 1].
2.  [cite_start]**Tag Configuration**: Update the `ok_rfid` variables in `RFID_Vehicle_Start_System.ino` with your specific tag UIDs[cite: 3, 4].
    ```cpp
    String ok_rfid_1 = "Your_Card_UID"; 
    String ok_rfid_2 = "Your_Keyfob_UID";
    ```
3.  **Upload**: Flash the code and use the Serial Monitor (9600 baud) for real-time debugging[cite: 4, 5].

## 👨‍💻 Developer
**Naman Pahariya** *Innovating secure solutions for a smarter tomorrow.*