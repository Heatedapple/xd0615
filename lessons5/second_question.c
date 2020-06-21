void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
 
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  
  
}
byte income=0;
int i=8;
void loop()
{
  if(Serial.available()>0)
  {
    if(i==12)
    {
      	i=8;
        digitalWrite(8,LOW);
    	digitalWrite(9,LOW);
    	digitalWrite(10,LOW);
    	digitalWrite(11,LOW);
    }
   income=Serial.read();
   Serial.println(income,DEC);
    income=income-'0';
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(i,HIGH);
    i++;
  }
}