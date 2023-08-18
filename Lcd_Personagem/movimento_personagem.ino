#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4); 


int i = 0;
int j = 0;

byte customChar[] = {
  B01110,
  B01010,
  B01110,
  B11111,
  B00110,
  B00110,
  B00101,
  B00101
};

void setup() {
  lcd.init();
  lcd.createChar(0,customChar);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
  }

void loop() {
  lcd.clear();
  lcd.setCursor(i%19,j%3);
  lcd.backlight();
  lcd.write(0);

  if(digitalRead(8) == HIGH){
      i++;
      delay(200);
       Serial.print(9600);
  }
   if( digitalRead(9) == HIGH){
      i--;
        delay(200);
               Serial.print(9600);

  }
   if( digitalRead(10) == HIGH){
      i++;
        delay(200);
               Serial.print(9600);

  }
   if( digitalRead(11) == HIGH){
      i++;  
        delay(200);
               Serial.print(9600);
  
  }

}
