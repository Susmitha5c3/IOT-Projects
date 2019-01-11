void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(8);
  static int count;
  static int y = LOW;
  if(x == HIGH){
    if(y == LOW){
    count+=1;
    Serial.println(count);
  }
  y = x;
  }
  else{
    y = LOW;
  }
}
