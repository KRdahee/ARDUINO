#include <LiquidCrystal_I2C.h>
//0x27, 0x30 //기본적으로 I2C 핀에 연결이 되어있어야 함.
LiquidCrystal_I2C lcd(0x27, 16, 2); //16x2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200UL);
  lcd.init();
  lcd.backlight();
  lcd.home();
  lcd.print("HELLO, I'm Dahee");
  lcd.setCursor(0,1);
  lcd.print("Nice to meet you");
}

void loop() {
  // put your main code here, to run repeatedly:

}
