#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
int sensorValue;
int digitalValue;

void setup() {

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);

  Wire.begin(2, 0);
  lcd.begin();
  lcd.backlight();
  lcd.print("LCD radi");
  delay(5000);
}
void loop() {
  sensorValue = analogRead(0);
  Wire.begin(2, 0);
  lcd.begin();
  lcd.backlight();
  lcd.print(sensorValue);
}
