# <p align="center"> <img src="AtmosSentry.png" width="120" height="120"><br>AtmosMorphSentry </p>

<p align="center">
  <strong>🏆 Achievement Unlocked: Robotics Domain 2025-26</strong><br>
  <em>"This is just the first 0.1% of the journey into Robotics."</em>
</p>

<p align="center">
  <img src="IMG_20260220_003608730.jpg" width="600" alt="Hardware Setup">
</p>

---

## 🌪️ Project Overview
**AtmosMorphSentry** is a high-fidelity atmospheric dashboard and hardware integration project developed during the **GSTian Development Programme** at **SIES Graduate School of Technology**. 

This project demonstrates the seamless handshake between physical sensors and high-performance software, turning real-world environmental data into an immersive visual experience.

### 💎 Key Features
* **Physical-to-Digital Trigger:** Utilizes a **Hall Effect sensor** on an Arduino-based circuit to cycle through modes via magnetic swiping.
* **144Hz Particle Engine:** A custom 3D vortex system built in Python/Pygame, optimized for high-refresh-rate displays like the **Asus TUF A17**.
* **Dual-API Real-Time Telemetry:** Concurrent fetches for Mumbai's Temperature, Wind Speed, and Air Quality Index (AQI).
* **Negative-Space Rendering:** UI logic where data strings are rendered as "voids" within a system of 4,000 active particles for maximum legibility.
* **Integrated Experience:** Hard-coded Spotify metadata featuring **"St. Chroma"** by Tyler, The Creator.

---

## 🛠️ Technical Stack

### **Software**
* **Python 3.10+**: Core engine logic.
* **Pygame**: 3D particle physics and coordinate-based rendering.
* **PySerial**: Hardware-to-software communication.
* **Requests & Threading**: Asynchronous API handling for a lag-free UI.

### **Hardware**
* **Arduino Uno**: Main microcontroller on a **GL-12 breadboard**.
* **Hall Effect Sensor**: Magnetic field detection for physical UI interaction.
* **Baud Rate**: 115200 for high-speed serial data transfer.

---

## 🔌 Hardware Setup

<p align="center">
  <img src="IMG_20260220_003143768.jpg" width="400" alt="Hardware Setup">
</p>

To replicate the physical interface, wire your sensor as follows:
* **VCC**: 5V
* **GND**: Ground
* **OUT**: Digital Pin 2

---

## ⚙️ Installation & Usage

1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/YourUsername/AtmosMorphSentry.git](https://github.com/YourUsername/AtmosMorphSentry.git)

2. Install Dependencies:
  **pip install pygame pyserial request**

3. Flash the Firmware:
Upload the provided firmware.ino file to your Arduino Uno.

4. Launch the Sentry:
Ensure your device is connected to COM10 and run:
    **python AtmosSentry.py**

🎓 Certification & Acknowledgments
This project marks the completion of the GSTian Development Programme (Robotics Domain).

Institution: SIES Graduate School of Technology.

Academic Year: 2025-2026.

Certification presented to: Sharvin Mhatre.

Organization: SIES GST Student Council.



<p align="center">Developed by<strong>Sharvin Mhatre</strong></p>





