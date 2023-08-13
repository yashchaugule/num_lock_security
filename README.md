# num_lock_security
The Num Lock functionality is typically associated with computer keyboards and is used to control the state of the numeric keypad. In the context of an Arduino Uno, which is a microcontroller board, there is no direct "Num Lock" feature or dedicated key like on a keyboard. However, you can create a similar functionality using the Arduino's digital input and output pins along with programming.

Here's a basic description of how you might implement a Num Lock-like behavior using an Arduino Uno:

Components Needed:

Arduino Uno board
Push button or switch
LEDs (optional) to indicate the Num Lock state
Steps:

Wiring:

Connect one terminal of the push button or switch to a digital input pin on the Arduino (e.g., pin 2).
Connect the other terminal of the push button or switch to the ground (GND) pin on the Arduino.
Optionally, you can connect LEDs to digital output pins to indicate the Num Lock state (ON/OFF).
