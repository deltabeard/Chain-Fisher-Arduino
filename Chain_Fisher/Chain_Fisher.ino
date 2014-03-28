/*
  2014 Mahyar Koshkouei
  
  Chain Fisher
*/

#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Below are hte usual pins for connecting to a Nokia 5110 LCD
// pin 7 - Serial clock out (SCLK)
// pin 6 - Serial data out (DIN)
// pin 5 - Data/Command select (D/C)
// pin 4 - LCD chip select (CS)
// pin 3 - LCD reset (RST)

Adafruit_PCD8544 display = Adafruit_PCD8544(13, 11, 7, 12, 10);
// My Nokia 5110 LCD requires different pins than the usual because it's a wierd one.

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
