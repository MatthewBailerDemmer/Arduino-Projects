const int PinoPotenciometro = A0;
const int Led = 13;
int ValorPot = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ValorPot = analogRead(PinoPotenciometro);
digitalWrite(Led, HIGH);
delay(ValorPot);
digitalWrite(Led, LOW);
delay(ValorPot);
}
