# <p align="center"> <img src="AtmosSentry.ico" width="100" height="100"><br>AtmosMorphSentry </p>

<p align="center">
  <strong>Achievement Unlocked: Robotics Domain 2025-26</strong><br>
    <em>"This is just the first 0.1% of the journey into Robotics."</em>
    </p>

    ---

    ## 🌪️ Overview
    **[span_0](start_span)AtmosMorphSentry** is a high-fidelity atmospheric dashboard and hardware integration project developed as part of the **GSTian Development Programme** in the Robotics Domain at **SIES Graduate School of Technology**[span_0](end_span). 

    The project bridges the gap between physical environmental sensing and high-performance digital visualization by using a magnetic interface to trigger complex 3D data morphing sequences.

    ## 💎 Key Features
    * **Physical-to-Digital Trigger:** Utilizes a Hall Effect sensor on an Arduino-based circuit to cycle through modes via magnetic swiping.
    * **144Hz Particle Engine:** Custom 3D vortex system built in Python/Pygame, optimized for high-refresh-rate displays like the Asus TUF A17.
    * **Dual-API Real-Time Telemetry:** Concurrent fetches for Mumbai's Temperature, Wind Speed, and Air Quality Index (AQI).
    * **Negative-Space Rendering:** UI logic where data strings are rendered as "voids" within a system of 4,000 active particles for maximum legibility.
    * **Hard-coded Atmosphere:** Integrated Spotify metadata featuring *"St. Chroma"* by Tyler, The Creator.

    ---

    ## 🛠️ Technical Stack

    ### **Software**
    * **Python 3.10+**: Core engine logic.
    * **Pygame**: 3D particle physics and coordinate-based rendering.
    * **PySerial**: Low-latency hardware-to-software communication.
    * **Requests/Threading**: Asynchronous API handling for zero-UI-lag.

    ### **Hardware**
    * **Arduino Uno**: Main microcontroller on a GL-12 breadboard.
    * **Hall Effect Sensor**: Magnetic field detection for UI interaction.
    * **Baud Rate**: 115200 for high-speed serial data transfer.

    ---

    ## 🔌 Hardware Setup



    To replicate the physical interface, wire your sensor as follows:
    * **VCC**: 5V
    * **GND**: Ground
    * **OUT**: Digital Pin 2

    ---

    ## ⚙️ Installation & Usage

    1. **Clone the Repository:**
       ```bash
          git clone [https://github.com/YourUsername/AtmosMorphSentry.git](https://github.com/YourUsername/AtmosMorphSentry.git)
          