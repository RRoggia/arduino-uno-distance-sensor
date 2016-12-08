#include "Ultrasonic.h"
const int trigger = 13;
const int echo = 12;
Ultrasonic ultrasonic(trigger, echo);

const int red = 9;
const int yellow = 10;
const int green = 11;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int distance = (ultrasonic.Ranging(CM));
  Serial.print("Distance is: ");
  Serial.println(distance);

  if(distance < 20){
    digitalWrite(red,HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
  } else if (distance >= 20 && distance < 40){
    digitalWrite(red,LOW);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,LOW);
  }else {
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,HIGH);
  }

  delay(1000);

}
