# 🏆 RFID Vehicle Start System
### *Winner of the National INSPIRE Award - MANAK (2023-24)*

Ever felt like traditional mechanical keys are a bit... old school? I built this project to bring modern security to everyday vehicles. This is an Arduino-powered **Keyless Ignition System** that uses encrypted **RFID** verification to start your engine.

This project wasn't just a hobby—it was selected by the **Department of Science & Technology (DST), Govt. of India** for a **₹10,000 grant** and was showcased at the District Level Exhibition.

---

## 🎖 Recognition & Awards
I'm honored that this project received recognition from:
* **INSPIRE Awards - MANAK**: Formally recognized for "Million Minds Augmenting National Aspiration and Knowledge."
* **National Innovation Foundation - India**: Awarded a ₹10,000 development grant.
* **Official Ref No.**: 23UP4704713
* **Institution**: Proudly developed at St. Joseph's Sr. Sec. School, Auraiya.

---

## 💡 Why This Project?
Traditional ignitions are actually quite easy to bypass, and losing your keys is a massive headache. This system adds a layer of digital security:
1. **Swipe to Start**: No mechanical wear and tear.
2. **Encrypted Security**: Only your specific 13.56MHz RFID tag can unlock the relay.
3. **Smart Simulation**: Currently, it uses a 5V relay to spin a DC motor, proving the concept for real vehicle ignitions.

## 🚀 Cool Features
* **⚡ Total Keyless Freedom**: Just tap your tag and you're good to go.
* **🛡️ Secure Access**: Only pre-authorized UIDs stored in the code can activate the system.
* **🔌 Safe Circuit Logic**: A 5V relay keeps the sensitive Arduino electronics isolated from the high-current motor circuit.
* **🔋 Battery Powered**: Optimized for a 7.4V portable 18650 Li-ion setup.

---

## 🛠️ The Hardware
* **The Brain**: Arduino Uno
* **The Reader**: MFRC522 RFID Module (SPI)
* **The Switch**: 5V Single-Channel Relay
* **The Output**: DC Motor (Simulating the engine)
* **The Juice**: 2x 18650 Li-ion Cells

## 📡 Wiring Guide

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

## 💻 Get It Running
1.  **Libraries**: Open your Arduino IDE and grab the `MFRC522.h` and `SPI.h` libraries.
2.  **Add Your Tags**: You'll need to find your specific tag UIDs and paste them into the code:
    ```cpp
    String ok_rfid_1 = "ABC123D4"; // Replace with your card ID
    String ok_rfid_2 = "XYZ987E6"; // Replace with your keyfob ID
    ```
3.  **Flash & Debug**: Upload the code and keep your Serial Monitor open at **9600 baud** to see what's happening in real-time.

---

## 👨‍💻 Developed By
**Naman Pahariya**
*Building things that make our future a little bit safer and a lot smarter.* 🚀

---

## 📄 License
This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and share!