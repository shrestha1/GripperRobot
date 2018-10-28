
#define  leftMotorP 7
#define leftMotorM  8
#define rightMotorP  11
#define rightMotorM  12

#define leftMotorSpeed  5
#define rightMotorSpeed  6

void setUpMotors(){
  
  pinMode(leftMotorP, OUTPUT);
  pinMode(leftMotorM, OUTPUT);
  pinMode(rightMotorP, OUTPUT);
  pinMode(rightMotorM, OUTPUT);
  
  pinMode(rightMotorSpeed, OUTPUT);
  pinMode(leftMotorSpeed,OUTPUT);
  
  analogWrite(rightMotorSpeed,150);
  analogWrite(leftMotorSpeed,150);
}

void moveForward(){
    digitalWrite(leftMotorP,HIGH);
    digitalWrite(leftMotorM,LOW);
    digitalWrite(rightMotorP,HIGH);
    digitalWrite(rightMotorM,LOW);
  }

void moveBackward(){
    digitalWrite(leftMotorP,LOW);
    digitalWrite(leftMotorM,HIGH);
    digitalWrite(rightMotorP,LOW);
    digitalWrite(rightMotorM,HIGH);
  }
  
void moveLeft(){
   digitalWrite(leftMotorP,HIGH);
   digitalWrite(leftMotorM,LOW);
   digitalWrite(rightMotorP,LOW);
   digitalWrite(rightMotorM,HIGH);
}

void moveStop(){
   digitalWrite(leftMotorP,LOW);
   digitalWrite(leftMotorM,LOW);
   digitalWrite(rightMotorP,LOW);
   digitalWrite(rightMotorM,LOW);
}


