#include<Servo.h>


Servo gripperServo;  // create servo object to control a servo
Servo lifterServo;

int pos = 0;    // variable to store the servo position

void setUpServo(){
   gripperServo.attach(3);  // gripper servo on pin 3 
   lifterServo.attach(9);  // lifting servo  on pin 9 
}

void grip(){
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      gripperServo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }    
}

void ungrip(){
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        gripperServo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
}

void liftUp(){
    for (pos = 0; pos <= 40; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      lifterServo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
}

void liftDown(){
    for (pos = 40; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        lifterServo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
 }

