/* Orbital Percession
 * Concord Robotics
 *
 * Fight robots! Fight!
 */

// Arduino Libs
#include "Arduino.h"

#define FLASH_LED 4

void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(FLASH_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(FLASH_LED, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000);                   // wait for a second
    digitalWrite(FLASH_LED, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);                   // wait for a second
}
