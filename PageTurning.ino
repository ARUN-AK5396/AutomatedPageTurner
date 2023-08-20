#include <Servo.h>


Servo wheelServo;
Servo rotateServo;
Servo mainServo;
Servo leftServo;
Servo rightServo;

int pos = 0;
void setup() {
  // put your setup code here, to run once:
  rotateServo.attach(2);
  wheelServo.attach(4);
  mainServo.attach(7);
  leftServo.attach(8);
  rightServo.attach(9);
  Serial.begin(9600);
}

void loop() {

  for(pos = 140; pos>=40;pos-=1) 
  {
    rotateServo.write(pos);
    delay(3);
  }
  delay(1000);
  // Wheel Spin
  for(pos = 0; pos<=280;pos+=1)
  {
    wheelServo.write(pos);
  }

  for(pos =60; pos<=240; pos+=1){
  leftServo.write(pos);
  rightServo.write(pos);
  delay(4);
 }
   delay(200);
  for (pos = 0; pos <= 240; pos += 1) { 
    mainServo.write(pos);            
    delay(4);                       
  }
  delay(500);
    
  // delay(5000);
  for(pos =30; pos<=140; pos+=1){
  rotateServo.write(pos);
  delay(3);
 }
for(pos = 240; pos>=60; pos-=1){
  leftServo.write(pos);
  rightServo.write(pos);
  delay(4);
 }
 delay(2000);
  for (pos = 240; pos >= 0; pos -= 1) { 
        mainServo.write(pos);            
    // delay(4);                      
  }
  for (pos = 280; pos >= 0; pos -= 1) 
  { 
        wheelServo.write(pos);                                 
  } 
  delay(4000);
} 
