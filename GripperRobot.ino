#include "ultrasonicSensor.h"


void setup() {
  // put your setup code here, to run once:
  //First of all the pin which you want to use must be defined to act as input or output pin.
  //pinMode(Pin_Number,x);
  //x = INPUT if you want to set the pin as input
  //x = OUTPUT if you want to set the pin as output
   
 setUpMotors();
 setUpUltrasonicSensor();
 setUpServo();
 liftDown(); 
}

void loop() {
  initializeUltrasonicSensor();
  follow();
  //moveForward();
  
}


