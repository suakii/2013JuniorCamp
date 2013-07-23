const int switchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int preSwitchState = 0;
int led = 2;
long interval = 1000; //시간 설정을 위한 간격 (여기서는 1초)

void setup()
{
	for(int x = 2; x < 8; x++) {
		pinMode(x,OUTPUT);
	}
	pinMode(switchPin, INPUT);  
	Serial.begin(9600);
}

void loop()
{
	unsigned long currentTime = millis();
	if(currentTime - previousTime > interval){
		previousTime = currentTime;
		digitalWrite(led,HIGH);
		if(switchState == 1){
			if(led >1){
				led--;
			}
		}
		else {
			if(led <8){
				led++;
			}
		}
	}
  Serial.print("LED: ");
  Serial.println(led);
  switchState = digitalRead(switchPin);
  Serial.print("Direction: ");
  Serial.println(switchState);
  
	if(switchState != preSwitchState){
		for(int x = 2; x < 8; x++) {
			digitalWrite(x, LOW);
		}
		if(switchState == 1){
			led = 7;
		}
		else {
			led = 2;
		}
			previousTime = currentTime;
	}
	preSwitchState = switchState;
}