void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(8);
  int y = digitalRead(9);
  
  if(x == HIGH && y == HIGH){
    Serial.println("object is detected");
    digitalWrite(13, x);
  }
  else{
    Serial.println("object is not detected");
    digitalWrite(13,LOW);
  }

}
