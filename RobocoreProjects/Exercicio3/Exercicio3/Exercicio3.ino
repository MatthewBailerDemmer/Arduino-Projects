int lm35 = A0;
int ADCLido = 0;
float temperaturaC = 0.0;
float temperaturaF = 0.0;
void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL1V1);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ADCLido = analogRead(A0);
  temperaturaC = ADCLido * 0.1075268817204301;
  temperaturaF = (temperaturaC * 1.8) + 32;
  Serial.print("Temperatura: ");
  Serial.print(temperaturaC);
  Serial.print("°C - ");
  Serial.print(temperaturaF);
  Serial.print("°F");
  Serial.println();
  delay(1000);
}
