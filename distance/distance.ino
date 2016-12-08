#include "Ultrasonic.h"
const int trigger = 13;
const int echo = 12;

Ultrasonic ultrasonic(trigger, echo);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int distance = (ultrasonic.Ranging(CM));
  Serial.print("Distance is: ");
  Serial.println(distance);

  delay(1000);

}
