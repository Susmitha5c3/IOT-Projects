#include<SoftwareSerial.h>
SoftwareSerial hash(10, 11); //RX, TX
void setup() {
  // put your setup code here, to run once:
  hash.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(hash.available() > 0) {
    int x = hash.read();
    hash.println(x);
  }
}
