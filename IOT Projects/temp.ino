#include"DHT.h"
DHT hash(4, DHT11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  hash.begin();
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
float temp=hash.readTemperature();
float humidity = hash.readHumidity();

Serial.println("the temperature is " + String(temp));
Serial.println("the humidity is " + String(humidity));
Serial.println();

if(temp>=30){
  digitalWrite(13,HIGH);
}

else{
  digitalWrite(13,LOW);
}
}
