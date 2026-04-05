# RFID Bike Start System

An Arduino-based RFID starter system that uses an MFRC522 RFID module to control a high-current motor (like a bike starter or ignition) via a relay module. 

The system provides a reliable, keyless way to start or lock your bike using cards or keyfobs.

## Features
- **Keyless Ignition:** Start or stop your bike with a simple swipe of an RFID tag.
- **Relay-Isolated Power:** Securely handles high-current loads without direct contact with the microcontroller.
- **Secure Tag Comparison:** Hardcoded UID system for maximum security.

## Hardware Components
- 1x Arduino Uno (or compatible)
- 1x MFRC522 RFID Reader Module
- 1x RFID Card & 1x RFID Keyfob (Standard MIFARE)
- 1x Single-Channel 5V Relay Module
- 1x DC Motor (Starter)
- Power Supply (e.g., 2x 18650 Li-ion Batteries)
- Jumper Wires

## Wiring Diagram

### 1. RFID RC522 to Arduino Uno
| RFID Pin | Arduino Pin |
| :------- | :---------- |
| VCC (3.3V) | 3.3V |
| RST | Pin 9 |
| GND | GND |
| MISO | Pin 12 |
| MOSI | Pin 11 |
| SCK | Pin 13 |
| SDA (SS) | Pin 10 |

### 2. Relay Module to Arduino Uno
| Relay Pin | Arduino Pin |
| :-------- | :---------- |
| VCC | 5V |
| GND | GND |
| IN (Signal) | Pin 7 |

### 3. Load Side (High Voltage/Current)
- **Relay COM:** Battery Positive (+)
- **Relay NO:** Motor Positive (+)
- **Battery GND:** Motor Negative (-)

## Setup & Installation
1. Install the **MFRC522** library in your Arduino IDE (Sketch > Include Library > Manage Libraries...).
2. Copy the code from `RFID_Bike_Start_System.ino` into your Arduino IDE.
3. Replace the placeholder UIDs (`ok_rfid_1` and `ok_rfid_2`) with your own tag UIDs.
4. Upload the code to your Arduino.
5. Wire the components as per the table above.
6. Test by swiping your RFID Card or Keyfob.

## Usage
- **Card Sweep:** Activates the relay to start or turn on the ignition.
- **Keyfob Sweep:** Deactivates the relay (or performs a secondary action).

---
*Note: This project is verified to work with the provided circuit and code.*
