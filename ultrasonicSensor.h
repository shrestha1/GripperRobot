#include "motor.h"
#include "gripper.h"

#define trigPin  A3
#define echoPin  A4
long duration, cm, inches;

void setUpUltrasonicSensor(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void initializeUltrasonicSensor(){
    //send Low signal for 5 microseconds
  Serial.println("hello");
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  
  //send High signal for 10 microseconds
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  //again Send low signal for conformation of high signal
  digitalWrite(trigPin,LOW);

  //setting the echoPin inorder to capture the signal
  //pinMode(echoPin,INPUT);
  //pulseIn() function takes two parameter 
  //and here pulseIn()givves the duration
  duration = pulseIn(echoPin,HIGH);
  
  cm = (duration/2)/29.1;
  inches = (duration/2)/74;

  Serial.println(inches);
  Serial.println("inch");
  Serial.println(cm);
  Serial.println("cm");
  Serial.println();

  delay(250);

}

void follow(){
   
  if(cm < 50){
    moveStop();
    grip();
    liftUp();
    delay(1000);
    moveBackward();
     delay(1000);
    moveLeft();
    Serial.println("Move Backward");
    delay(500);
    moveStop();
    liftDown();
    ungrip();
    delay(500);
    moveBackward();
    delay(500);
    moveLeft();
    delay(100);
    }
   else{
    
    moveForward();
    Serial.println("Move Forward");
    
   }
}


