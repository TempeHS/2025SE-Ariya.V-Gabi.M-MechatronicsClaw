#include "robotServo.h"
#include <Servo.h>

myServo::myServo(byte pin);
{
  this->pin = pin;
}

void myServo::init();
{
  pinMode(pin);
}

void myServo::servoPos();
{
  int pos = 0;
  for (pos = 0; pos <= 180; pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myServo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(15);           // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) {  // goes from 180 degrees to 0 degrees
    myServo.write(pos);                  // tell servo to go to position in variable 'pos'
    delay(15);                           // waits 15ms for the servo to reach the position
  }
}