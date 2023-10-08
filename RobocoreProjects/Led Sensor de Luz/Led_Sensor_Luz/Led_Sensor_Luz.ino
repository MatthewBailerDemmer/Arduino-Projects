const int LDR = 0;
const int Led = 11;
int ValorLido = 0;
int pwm = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ValorLido = analogRead(LDR);
/*Serial.print("Valor lido pelo LDR = ");
Serial.println(ValorLido);
delay(500);*/
if(ValorLido < 750){
  analogWrite(Led, pwm);
  pwm++;
  delay(100);
}
else{
  digitalWrite(Led, LOW);
  pwm = 0;
}

if(pwm > 255){
  pwm = 255;
}
}
