#define DO3 7645
#define RE3 6811
#define MI3 6068
#define PA3 5727
#define SOL3 5102
#define RA3 4545
#define SI3 4050
#define DO4 3822
#define RE4 3405
#define MI4 3034
#define PA4 2863
#define SOL4 2551
#define RA4 2273
#define SI4 2025
#define DO5 1910
#define RE5 1703
#define MI5 1517
#define PA5 1432
#define SOL5 1276
#define RA5 1136
#define SI5 1012

#define TEMPO 200
void play_music(int SCALE, int duration)  //SCALE : 음계, duration : 길이
{
  for(long i = 0; i< duration ; i=i+1)
  {
      digitalWrite(7,1);
      delayMicroseconds(SCALE/2);
      digitalWrite(7,0);
      delayMicroseconds(SCALE/2);
  }
}
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
   play_music(SOL4, TEMPO);  
   play_music(SOL4, TEMPO);  
   play_music(MI4, TEMPO / 2);  
   play_music(PA4, TEMPO / 2);  
   play_music(SOL4, TEMPO);  
   play_music(RA4, TEMPO);  
   play_music(RA4, TEMPO);  
   play_music(SOL4, TEMPO * 2);  
   
   play_music(SOL4, TEMPO);  
   play_music(DO5, TEMPO);  
   play_music(MI5, TEMPO);  
   play_music(RE5, TEMPO / 2);  
   play_music(DO5, TEMPO / 2);  
   play_music(RE5, TEMPO * 3);  
   
   play_music(MI5, TEMPO);  
   play_music(MI5, TEMPO);  
   play_music(RE5, TEMPO);  
   play_music(RE5, TEMPO);  
   play_music(DO5, TEMPO);  
   play_music(RE5, TEMPO / 2);  
   play_music(DO5, TEMPO / 2);  
   play_music(RA4, TEMPO * 2);  
   
   play_music(SOL4, TEMPO);  
   play_music(SOL4, TEMPO);  
   play_music(SOL4, TEMPO);  
   play_music(MI4, TEMPO / 2);  
   play_music(RE4, TEMPO / 2);  
   play_music(DO4, TEMPO * 3);  
    play_music(RE4, TEMPO);  
   play_music(RE4, TEMPO);  
   play_music(MI4, TEMPO);  
   play_music(DO4, TEMPO);  
   play_music(RE4, TEMPO * 2);  
   play_music(MI4, TEMPO);  
   play_music(SOL4, TEMPO);  
   
   play_music(RA4, TEMPO);  
   play_music(DO5, TEMPO);  
   play_music(MI5, TEMPO);  
   play_music(RE5, TEMPO / 2);  
   play_music(DO5, TEMPO / 2);  
   play_music(RE5, TEMPO * 3);  
   
   play_music(MI5, TEMPO);  
   play_music(MI5, TEMPO);  
   play_music(RE5, TEMPO);  
   play_music(RE5, TEMPO);  
   play_music(DO5, TEMPO);  
   play_music(RE5, TEMPO / 2);  
   play_music(DO5, TEMPO / 2);  
   play_music(RA4, TEMPO);  
   play_music(RA4, TEMPO);  
   
   play_music(SOL4, TEMPO);  
   play_music(SOL4, TEMPO);  
   play_music(SOL4, TEMPO);  
   play_music(MI4, TEMPO / 2);  
   play_music(RE4, TEMPO / 2);  
   play_music(DO4, TEMPO * 3);  
  
  delay(1000);                         
}