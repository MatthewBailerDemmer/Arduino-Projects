#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int lm35 = A0;
int ADCLido = 0;
float temperaturaC = 0.0;
float temperaturaF = 0.0;
void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL1V1);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  ADCLido = analogRead(A0);
  temperaturaC = ADCLido * 0.1075268817204301;
  temperaturaF = (temperaturaC * 1.8) + 32;
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperaturaC);
  lcd.print("C");
  lcd.setCursor(6, 1);
  lcd.print(temperaturaF);
  lcd.print("F");
  delay(1000);
}

