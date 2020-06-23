#include <MsTimer2.h> 
byte tick = 0;
void onTimer()
{
  tick%=10;
  digitalWrite(5,tick&0x1);
  digitalWrite(6,(tick>>1)&0x1);
  digitalWrite(7,(tick>>2)&0x1);
  digitalWrite(8,(tick>>3)&0x1);
  tick++;
}
void onChange()
{
  if (digitalRead(2) == LOW)
    tick=0;
}
void setup()
{
  for(int i=5;i<=11;i++){
    pinMode(i, OUTPUT);
    Serial.begin(9600);
    digitalWrite(9, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10,LOW);
  }
  MsTimer2::set(1000, onTimer); 
  MsTimer2::start();
  
  pinMode(2,INPUT);
  attachInterrupt( digitalPinToInterrupt(2), onChange, CHANGE);
}

void loop()
{
  
}