void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 //pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  int y =analogRead(A1);
  Serial.print(x);
  Serial.print(",");
  Serial.println(y);
 /* if(x){
    digitalWrite(13,HIGH);
  }
 if(y){
    digitalWrite(13,LOW);
  }*/
}
