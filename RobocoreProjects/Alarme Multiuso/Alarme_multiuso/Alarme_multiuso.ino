const int LDR = 0;
const int LM35 = 1;
const int Buzzer = 4;
const int led[] = {5, 6, 7, 8, 9, 10, 11};
int ValorLDR = 0;
int ADClido = 0;
float temperatura = 0;
int pwm = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int x = 0; x < 7; x++){
  pinMode(led[x], OUTPUT);
}
pinMode(Buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ValorLDR = analogRead(LDR);
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.4887585532;
  if(temperatura > 18.00){
    digitalWrite(led[0], HIGH);
  }
  else{
    digitalWrite(led[0], LOW);
  }
  if(temperatura > 19.00){
    digitalWrite(led[1], HIGH);
  }
  else{
    digitalWrite(led[1], LOW);
  }
  if(temperatura > 20.00){
    digitalWrite(led[2], HIGH);
  }
  else{
    digitalWrite(led[2], LOW);
  }
  if(temperatura > 21.00){
    digitalWrite(led[3], HIGH);
  }
  else{
    digitalWrite(led[3], LOW);
  }
  
  if(ValorLDR  < 850)
  {
    digitalWrite(led[4], HIGH);
  }
  else{
    digitalWrite(led[4], LOW);
  }
  if(ValorLDR < 750)
  {
    digitalWrite(led[5], HIGH);
  }
  else{
    digitalWrite(led[5], LOW);
  }
  if(ValorLDR < 700)
  {
    digitalWrite(led[6], HIGH);
  }
  else{
    digitalWrite(led[6], LOW);
  }
  if(ValorLDR < 650){
    digitalWrite(led[7], HIGH);
    tone(Buzzer, 2000);
  }
  else {
    digitalWrite(led[7], LOW);
    noTone(Buzzer);
  }

    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print("°C - LDR: ");
    Serial.print(ValorLDR);
    Serial.println();
}
