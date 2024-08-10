# Ultrasonic Sensor Distance Measurement

This project demonstrates how to use an ultrasonic sensor (such as the HC-SR04) with an Arduino to measure distances. The code calculates the distance by sending out an ultrasonic pulse and timing how long it takes to return after bouncing off an object.

## Components Needed

- Arduino (Uno, Nano, etc.)
- Ultrasonic Sensor (HC-SR04)
- Breadboard
- Jumper wires
- USB cable (for programming and power)

## Circuit Diagram

| Pin on HC-SR04 | Connects to       |
|----------------|-------------------|
| VCC            | 5V on Arduino     |
| GND            | GND on Arduino    |
| Trig           | Digital Pin 9      |
| Echo           | Digital Pin 10     |

## Code Explanation

The project includes a simple Arduino sketch that:
1. Sends a pulse from the `Trig` pin of the ultrasonic sensor.
2. Measures the time it takes for the pulse to return to the `Echo` pin.
3. Converts this time into distance using the speed of sound in air.
4. Displays the distance in centimeters on the serial monitor.

## Alternative Calculation
If you prefer a simpler calculation, you can use:
`long distance = duration / 58;`
This formula directly converts the time taken by the pulse to return into distance in centimeters.

# How to Use

1.Assemble the Circuit:
Connect the components as described in the circuit diagram.

2.Upload the Code:
Open the Arduino IDE.
Copy the provided code into the IDE.
Select the correct board and port under the "Tools" menu.
Click "Upload" to program the Arduino.

3.View the Results:

Open the Serial Monitor from the Arduino IDE (Ctrl + Shift + M).
Observe the distance readings in centimeters.

# License
This project is open-source and available under the MIT License. You are free to use, modify, and distribute the code as you wish.
