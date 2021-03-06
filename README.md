# Bidirectional Visitor Counter using Arduino UNO (Circuit Made in Proteus 8)

Bidirectional visitor counter is a reliable circuit that takes over the task of counting number of Persons/ Visitors in the Room very accurately. When somebody enters into the Room then the Counter is Incremented by one. Similarly, when someone leaves the Room, the counter is decremented.

This circuit divided in three parts: sensor, controller and counter display. The sensor would observe an interruption and provide an input to the controller which would run the counter in up/down mode depending upon the selector setting. The same count is displayed on a liquid crystal display through the controller.




                                                   COMPONENTS USED
    1. Arduino Uno Microcontroller, ATMEGA328P-PU
    2. IR Obstacle Sensor
    3. LCD, LM016L (16x2)
    4. RELAY (G2R-14-DC5)
    5. Transistor ,BC547
    6. Resistors
    7. VSIN
    8. LAMP
    9. Solder Less bread board jumper wire kit
    10.Logic Toggle (only used in this circuit)


###### <p align="center">PIN CONFIG</p>


> -  Arduino pins 14(A0) and 19(A5) acts as input pins and connected to OUT of the two sensors respectively
> -  Arduino pins 12 and 13 are connected to E and RS pins of the LCD respectively
> - Arduino pins 11-8 are connected to Data bits D4-D7 on LCD respectively.
> -  Arduino pin 2 is used as an output pin to a relay circuit (optional).



For references check out [this](https://www.youtube.com/watch?v=JbaVYMk1BWU&ab_channel=ABHISHEKKUMAR) and [this page](https://circuitdigest.com/microcontroller-projects/automatic-room-light-controller-with-bidirectional-visitor-counter-using-arduino)
