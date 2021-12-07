# Bidirectional Visitor Counter using Arduino UNO (Circuit Made in Proteus 8)
### College project of making a Wireless Visiter Counter using Arduino circuit made in Proteus 8

Bidirectional visitor counter is a reliable circuit that takes over the task of counting number of Persons/ Visitors in the Room very accurately. When somebody enters into the Room then the Counter is Incremented by one. Similarly, when someone leaves the Room, the counter is decremented.


                                            MATERIALS REQUIRED

                             1. Arduino Uno Microcontroller, ATMEGA328P-PU
                             2. IR Obstacle Sensor
                             3. LCD, LM016L (16x2)
                             4. RELAY
                             5. Transistor ,BC547
                             6. Resistors
                             7. Solder Less bread board jumper wire kit
                             8. Logic Toggle (only used in this circuit)

This circuit divided in three parts: sensor, controller and counter display. The sensor would observe an interruption and provide an input to the controller which would run the counter in up/down mode depending upon the selector setting. The same count is displayed on a liquid crystal display through the controller.

- Arduino pins 14(A0) and 19(A5) acts as input pins and connected to OUT of the two sensors respectively
- Arduino pins 12 and 13 are connected to E and RS pins of the LCD respectively
- Arduino pin 2 is used as an output pin to a relay circuit (optional).
