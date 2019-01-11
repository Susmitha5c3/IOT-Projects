#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  int x = digitalRead(8);
  if(x == HIGH){
  myservo.write(90);
  delay(1000);
  }
  else{
    myservo.write(0);
  }

}
