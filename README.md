# **Hand Light Control Project**

A **hand gesture-controlled LED system** using **MediaPipe** and **Arduino**.
Pinch your **thumb and index finger** to **turn the light ON or OFF** in real time.

---

## **Features**

* Detects hand gestures with **MediaPipe Hands**.
* Toggles an **Arduino-connected LED** using a pinch gesture.
* Provides **real-time visual feedback** via webcam.
* Works on **CPU-only systems** (no GPU required).

---

## **Requirements**

* Python 3.10+
* OpenCV (`opencv-python`)
* MediaPipe (`mediapipe==0.10.21`)
* PySerial (`pyserial`)
* Arduino UNO (or similar)
* LED connected to pin 13 (or changeable in Arduino code)

Install Python dependencies with:

```bash
pip install -r requirements.txt
```

---

## **Setup Instructions**

1. **Connect the Arduino** to your computer.
2. **Upload the Arduino code** `hand_light_control.ino` to your board.
3. **Run the Jupyter Notebook** `hand_light_control.ipynb`.
4. **Perform the pinch gesture** (thumb + index finger) to toggle the LED.
5. **Press ESC** to close the webcam window.

---

## **Usage Details**

* Webcam feed is **mirrored** for a natural view.
* Pinch your thumb and index finger to toggle the LED:

  * **Green circle** → Light ON
  * **Red circle** → Light OFF
* Each gesture includes a **0.5-second delay** to prevent flickering.

---

## **File Structure**

```
hand-light-control-project/
│
├── hand_light_control.ipynb   # Jupyter Notebook with MediaPipe code
├── arduino/
│   └── hand_light_control.ino # Arduino code for controlling LED
├── requirements.txt           # Python dependencies
└── README.md                  # Project description
```

---

## **License**

This project is **open-source**. Feel free to use, modify, and improve it.


Do you want me to create that?
