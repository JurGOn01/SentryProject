#include <Arduino.h>
#include <Servo.h> // Lib needed for Servo control

#include <avr8-stub.h> // IRL debug
#include <app_api.h>   // needed with flash breakpoints

// Boundries condition values for X-axis servo
#define MAX_X_Postion 130
#define DEFAULT_X_Postion 65 // TODO
#define MIN_X_Postion 0
// Boundries condition values for Y-axis servo
#define MAX_Y_Postion 103
#define DEFAULT_Y_Postion 45
#define MIN_Y_Postion 13

Servo servo_X; // servo object - control
Servo servo_Y;

int currPos_X = 0; // X servo current position
int currPos_Y = 0; // X servo current position

void setup()
{
  // put your setup code here, to run once:
  debug_init(); // start of debug
  servo_X.attach(9);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (currPos_X = 0; currPos_X <= MAX_X_Postion; currPos_X += 1)
  { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo_X.write(currPos_X); // tell servo to go to position in variable 'pos'
    delay(15);                // waits 15 ms for the servo to reach the position
  }
  for (currPos_X = 180; currPos_X >= MIN_X_Postion; currPos_X -= 1)
  {                           // goes from 180 degrees to 0 degrees
    servo_X.write(currPos_X); // tell servo to go to position in variable 'pos'
    delay(15);                // waits 15 ms for the servo to reach the position
  }

  for (currPos_Y = 0; currPos_Y <= MAX_Y_Postion; currPos_Y += 1)
  { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo_Y.write(currPos_Y); // tell servo to go to position in variable 'pos'
    delay(15);                // waits 15 ms for the servo to reach the position
  }
  for (currPos_Y = 180; currPos_Y >= MIN_Y_Postion; currPos_Y -= 1)
  {                           // goes from 180 degrees to 0 degrees
    servo_Y.write(currPos_Y); // tell servo to go to position in variable 'pos'
    delay(15);                // waits 15 ms for the servo to reach the position
  }
}