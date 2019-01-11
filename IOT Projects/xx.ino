void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(8,INPUT);  //IR sensor
  pinMode(9,INPUT);
  pinMode(12,INPUT); //]touch sensor
}

void loop() {
  // put your main code here, to run repeatedly:
  int ir = digitalRead(8);//IR
  int ir1 = digitalRead(9);//IR
  int t= digitalRead(12);//touch
  int jx = analogRead(A0);//joyStick
  int jy = analogRead(A1);//joyStick
  int w = analogRead(A3);//water
  int r = analogRead(A2);//rain drop
  int ldr = analogRead(A4);//LDR sensor
  int soil = analogRead(A5);//Soil
  Serial.println("First IR sensor data is " + String(ir));
  Serial.println("Second IR sensor data is " + String(ir1));
  Serial.println("touch sensor data is" + String(t));
  Serial.println("joystick sensor data is" + String(jx)+","+String(jy));
  Serial.println("water sensor data is" + String(w));
  Serial.println("raindrop sensor data is" + String(r));
   Serial.println("ldr sensor data is" + String(ldr));
    Serial.println("soil sensor data is" + String(soil));
    Serial.println();
delay(1000);  
}
