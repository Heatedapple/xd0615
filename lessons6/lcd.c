#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11,9,8,7,6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  if(Serial.available()>0){
   	lcd.clear();
  	lcd.print(Serial.readString());
  }
}
 