#include <Arduino.h>
#include <Servo.h>

#include <avr8-stub.h>
#include <app_api.h> //only needed with flash breakpoints

// Upper and lower value postions for X-axis Servo
#define MAX_X_POSITION 130
#define DEFAULT_X_POSITION 0 // TODO
#define MIN_X_POSITION 0

// Upper and lower value postions for X-axis Servo
#define MAX_Y_POSITION 0     // TODO
#define DEFAULT_Y_POSITION 0 // TODO
#define MIN_Y_POSITION 0     // TODO

void setup()
{
  debug_init();
}

void loop()
{
}