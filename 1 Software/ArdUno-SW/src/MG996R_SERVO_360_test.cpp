#include <Arduino.h>
#include <Servo.h>

Servo servoCtrl;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int potpin = A5;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {

  servoCtrl.attach(9);  // attaches the servo on pin 9 to the servo object

}


void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servoCtrl.write(val);                  // sets the servo position according to the scaled value
  delay(15);        
                     // waits for the servo to get there
}