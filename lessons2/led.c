void setup()
{ 

  for(int i=0;i<13;i+=2){
  	pinMode(i,OUTPUT);
  }
}

void loop()
{
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  for(int j=2;j<=6;j+=2){
  	digitalWrite(6+j,HIGH);
    digitalWrite(6-j,HIGH);
    delay(500);
  }
  for(int i=0;i<13;i+=2){
  	digitalWrite(i,LOW);
  }
}