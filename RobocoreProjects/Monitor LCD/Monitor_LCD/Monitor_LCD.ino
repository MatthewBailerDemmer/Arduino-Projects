
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Ola, meu nome e: ");
  lcd.setCursor(0,1);
  lcd.print("Matheus");
}

void loop() {
  // put your main code here, to run repeatedly:

}
