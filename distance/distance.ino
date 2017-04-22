#include "Ultrasonic.h"
const int trigger = 13;
const int echo = 12;
Ultrasonic ultrasonic(trigger, echo);

const int lamp_relay = 7;


void setup() {
  pinMode(lamp_relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int distance = (ultrasonic.Ranging(CM));
  Serial.print("Distance is: ");
  Serial.println(distance);

  if(distance < 50){
    digitalWrite(lamp_relay, HIGH);
  }else{
    digitalWrite(lamp_relay, LOW);
  }

  delay(2000);

}
