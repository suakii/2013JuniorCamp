void setup() {
  pinMode(7, OUTPUT);
}
void loop(){
  for(int i = 0; i<100; i=i+1)   {
      digitalWrite(7,1);
      delayMicroseconds(3822/2);
      digitalWrite(7,0);
      delayMicroseconds(3822/2);
  }
  delay(1000);
}