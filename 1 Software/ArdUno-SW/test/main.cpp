#include <Arduino.h>

#define LED_BUILTIN 13
#define GUN_ON_OF 8

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(GUN_ON_OF,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(GUN_ON_OF,LOW);
  delay(2000);
  digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(GUN_ON_OF,HIGH);
  delay(2000);



  // put your main code here, to run repeatedly:
}