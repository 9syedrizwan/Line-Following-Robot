#define leftMotorForward 3
#define leftMotorForward 5
#define RightMotorForward 6
#define RightMotorForward 9
#define rightIr A1
#define leftIr A0
 
void setup(){
  pinMode (leftMotorForward,OUTPUT);
  pinMode (RightMotorForward,OUTPUT);
  pinMode (leftMotorForward,OUTPUT);
  pinMode (RightMotorForward,OUTPUT);
  pinMode (leftIr,INPUT);
  pinMode (rightIr,INPUT);
} 

void loop(){
   if(analogRead(leftIr)< 500 && analogRead(rightIr)< 500) //forward
   {
    digitalWrite(leftMotorForward,150);
    digitalWrite(rightMotorForward,150);
   }
   else if(analogRead(leftIr)< 500 && analogRead(rightIr)>=500) //right
   {
    digitalWrite(leftMotorForward,130);
    digitalWrite(rightMotorForward,LOW);
   }
   else if((analogRead(leftIr)>=500 && analogRead(rightIr)< 500)) //left
   {
        digitalWrite(leftMotorForward,LOW);
        digitalWrite(rightMotorForward,130);
   }
   else if((analogRead(leftIr)>= 500 && analogRead(rightIr)>= 500)) 
   {
        digitalWrite(leftMotorForward,LOW);
    digitalWrite(rightMotorForward,LOW);
   }
   delay(1);
}
