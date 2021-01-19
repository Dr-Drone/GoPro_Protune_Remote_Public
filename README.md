# GP_PT_Remote_Public

Initially created to work with the GP Session 5, should work with later models as well as naked versions. 

Designed to work plug and play with the TTGO T-Display, and DIY version using an ESP32 push buttons (2x) and an oled screen, works with the HiLetgo ESP32 OLED but an extra push button is required. 

TTGO T-Display:
Plug and play

DIY ESP32: 
OLED: -> | SDA -> 21 | SCL -> 22 | 
Button 1: -> | 33, GND | (Needs 10k resistor from pin 33 to 3.3v)
Button 2: -> | 35, GND | (Needs 10k resistor from pin 33 to 3.3v)

HiLetgo:
Button 1: -> (Pre connected)
Button 2: -> | 35, GND | (Needs 10k resistor from pin 33 to 3.3v) 

