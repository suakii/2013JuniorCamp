int brightness = 0;
int increment = 1;
void setup() 
{
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT); 
	pinMode(6, OUTPUT); 
	pinMode(9, OUTPUT); 
	pinMode(10, OUTPUT); 

}
void loop() 
{
	if (brightness > 255)
		increment = -1;
	else if (brightness < 1)
		increment = 1;
   
	   brightness += increment;
	   analogWrite(3, brightness);
	   analogWrite(5, brightness);
	   analogWrite(6, brightness);
	   analogWrite(9, brightness);
	   analogWrite(10, brightness);
	   delay(10);
}
