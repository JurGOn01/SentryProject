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

void Xaxis_test();
void Yaxis_test();

void setup()
{
  // put your setup code here, to run once:
  debug_init(); // start of debug
  servo_X.attach(5);
  servo_Y.attach(6); // attaching the servos to the PWM channel defined by System Schematic
  delay(100);        // Electronics energising wait

  servo_X.write(DEFAULT_X_Postion);
  delay(1000);
  servo_Y.write(DEFAULT_Y_Postion);
  delay(1000);
}

void loop()
{

  Xaxis_test();
  Yaxis_test();
}

void Xaxis_test()
{
  for (currPos_X = DEFAULT_X_Postion; currPos_X <= MAX_X_Postion; currPos_X += 1)
  {
    servo_X.write(currPos_X);
    delay(15);
  }

  for (currPos_X = MAX_X_Postion; currPos_X >= MIN_X_Postion; currPos_X -= 1)
  {
    servo_X.write(currPos_X);
    delay(15);
  }

  for (currPos_X = 0; currPos_X < DEFAULT_X_Postion; currPos_X += 1)
  {
    servo_X.write(currPos_X);
    delay(15);
  }
}

void Yaxis_test()
{
  for (currPos_Y = DEFAULT_Y_Postion; currPos_Y <= MAX_Y_Postion; currPos_Y += 1)
  {
    servo_Y.write(currPos_Y);
    delay(20);
  }

  for (currPos_Y = MAX_Y_Postion; currPos_Y >= MIN_Y_Postion; currPos_Y -= 1)
  {
    servo_Y.write(currPos_Y);
    delay(20);
  }

  for (currPos_Y = 0; currPos_X < DEFAULT_Y_Postion; currPos_Y += 1)
  {
    servo_Y.write(currPos_Y);
    delay(20);
  }
}