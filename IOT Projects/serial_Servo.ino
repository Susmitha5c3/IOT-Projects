#include"Servo.h"
Servo myservo;
float data;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  int i;
  
  if(Serial.available() > 0){
    data = Serial.read();
    Serial.print(data);
    delay(100);
    for(i=0;i<=data;i++){
      Serial.println(i);
      myservo.write(i);
      delay(100);
    }
    for(i=data;i>=0;i--){
      Serial.println(i);
      myservo.write(i);
      delay(100);
    }
  }
}
