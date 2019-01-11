#include<Servo.h>
Servo myservo; 
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(11,INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
   myservo.write(0);
digitalWrite(10, LOW);
delayMicroseconds(10);
digitalWrite(10, HIGH);
delayMicroseconds(2);
digitalWrite(10,LOW);

long duration = pulseIn(11, HIGH);
long distance = duration*0.034/2;
if(distance <10){
  myservo.write(90);
  delay(1000);
}
else{
  myservo.write(0);
  delay(1000);
}

Serial.println(distance);
}
