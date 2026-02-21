# <p align="center"> <img src="AtmosSentry.png" width="120" height="120"><br>AtmosMorphSentry </p>

<p align="center">
  <strong>🏆 Achievement Unlocked: Robotics Domain 2025-26</strong><br>
  <em>"This is just the first 0.1% of the journey into Robotics."</em>
</p>

<p align="center">
  <img src="IMG_20260220_003608730.jpg" width="600" alt="Candid">
</p>

---

## 🌪️ Project Overview
**AtmosMorphSentry** is a high-fidelity atmospheric dashboard and hardware integration system designed to bridge the gap between physical sensing and digital visualization. Developed as a cornerstone project for the GSTian Development Programme (Robotics Domain), it serves as a proof of concept for low-latency Human-Computer Interaction (HCI).

The Core Mechanism
The system employs a "Hardware Handshake" protocol via a 115200 baud serial connection. A magnetic Hall Effect sensor acts as the primary physical latch; once triggered, it initiates an asynchronous dual-API fetch sequence to retrieve real-time telemetry (AQI, Wind Speed, Temperature) for Mumbai City.

Visualization & Performance
The backend, built on a custom 144Hz Particle Engine in Python, utilizes Negative-Space rendering to display telemetry. Rather than traditional text rendering, the system manages a field of 4,000 active particles that morph into geometric "voids" to display data, ensuring high-fidelity legibility on high-refresh-rate displays like the Asus TUF A17.

Technical Stack
**Microcontroller**: Arduino Uno (Serial-over-USB).

**Sensors**: Hall Effect (Magnetic Field Detection).

**Engine**: Python 3.10+ (Pygame Core, Threading).

**Data Layer**: OpenWeatherMap API (Weather + Air Pollution endpoints).

**Aesthetics**: Hard-coded Spotify metadata integration featuring "St. Chroma" by Tyler, The Creator.

## 🛠️ **Technical Stack**

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

**🎓 Certification & Acknowledgments**

<p align="center">
  <img src="Sharvin Mhatre.pdf_20260220_213723_0000.png" width="600" alt="Certificate">
</p>



This project marks the completion of the GSTian Development Programme (Robotics Domain).

Institution: SIES Graduate School of Technology.

Academic Year: 2025-2026.

Certification presented to: Sharvin Mhatre.

Organization: SIES GST Student Council.



<p align="center">Developed by <strong>Sharvin Mhatre</strong></p>





