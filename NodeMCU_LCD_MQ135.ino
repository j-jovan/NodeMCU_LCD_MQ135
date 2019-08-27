#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup(){
  Wire.begin(2,0);
  lcd.begin();   
  lcd.backlight();  
  lcd.print("Test"); 
}
void loop(){

}
