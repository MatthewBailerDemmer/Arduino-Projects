const int Pot = A0;
const int Led = 13;
int ValorPot = 0;
int leds[] = {2, 3, 4, 5, 6, 7, 8,9 , 10, 11};
int pwm = 0;
void setup() {
  // put your setup code here, to run once:
  for(int x = 0; x < 10; x++){
    pinMode(leds[x], OUTPUT);
  }
  pinMode(Pot, OUTPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ValorPot = analogRead(Pot);
  pwm = map(ValorPot, 0, 1023, 0 ,255);
  analogWrite(Led, pwm);
  
  for(int x = 0; x < 10; x++){
    if(pwm > (24,6 * x)){
      digitalWrite(leds[x], HIGH);
    }else{
      digitalWrite(leds[x], LOW);
    }
  }

  Serial.print("Valor potenciometro: ");
  Serial.print(ValorPot);
  Serial.print(" , Valor pwm: ");
  Serial.println(pwm);
}
