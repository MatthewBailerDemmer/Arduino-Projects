const int PinoPotenciometro = A0;
const int Led= 11;
int ValorPot = 0;
int pwm = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 ValorPot = analogRead(PinoPotenciometro);
 pwm = map(ValorPot, 0, 1023, 0, 255);
 analogWrite(Led, pwm);
}
