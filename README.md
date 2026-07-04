Arduino Traffic Light System

Project Overview
This project simulates a traffic light using an Arduino Uno, three LEDs, resistors, and a buzzer. The LEDs operate in the sequence of a real traffic signal, and the buzzer sounds before the red light turns on.


Features
Green, Blue, and Red LED sequence
Buzzer warning before the red light
Arduino-based control using digital output pins
Easy to modify timing


Components Used
Arduino Uno
Breadboard
Red LED
Yellow LED
Green LED
3 × 220 Ω resistors
Active buzzer
Jumper wires
USB cable


Circuit Connections
Arduino GND → Breadboard GND rail
Red LED
Long leg (Anode) → Arduino D4
Short leg (Cathode) → 220 Ω resistor → GND rail

Yellow LED
Long leg (Anode) → Arduino D3
Short leg (Cathode) → 220 Ω resistor → GND rail

Green LED
Long leg (Anode) → Arduino D2
Short leg (Cathode) → 220 Ω resistor → GND rail

2. Active Buzzer
Positive (+) pin → Arduino D5
Negative (−) pin → GND rail

4. USB cable → Connect Arduino to your computer for power and programming.
This assumes your code uses:
D5 → Buzzer
D4 → Red LED
D3 → Yellow LED
D2 → Green LED


How to Run
Assemble the circuit.
Open the Arduino IDE.
Upload the traffic_light.ino sketch.
Observe the LED sequence and buzzer operation.

Results

The traffic light cycles through Green → Blue → Buzzer → Red continuously.


Future Improvements
Pedestrian crossing button
LCD countdown timer
Vehicle detection using ultrasonic sensor
IoT monitoring with ESP32 or Raspberry Pi


Author
Aditi Bhatnagar
