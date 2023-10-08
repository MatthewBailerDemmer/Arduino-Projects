const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
const int Buzzer = 3;
const int LED[] = {
  13, 12, 11, 10, 9, 8, 7, 6, 5, 4};

void setup() {
  // put your setup code here, to run once:
analogReference(INTERNAL1V1);
pinMode(Buzzer, OUTPUT);
for(int x = 0; x < 10; x++){
  pinMode(LED[x], OUTPUT);
}
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  if(temperatura > 23.50){
    digitalWrite(LED[0], HIGH);
  }
  else
  {
    digitalWrite(LED[0], LOW);
  }
  if(temperatura > 24.00){
    digitalWrite(LED[1], HIGH);
  }
  else
  {
    digitalWrite(LED[1], LOW);
  }
  if(temperatura > 24.50){
    digitalWrite(LED[2], HIGH);
  }
  else
  {
    digitalWrite(LED[2], LOW);
  }
  if(temperatura > 25.00){
    digitalWrite(LED[3], HIGH);
  }
  else
  {
    digitalWrite(LED[3], LOW);
  }
  if(temperatura > 25.50){
    digitalWrite(LED[4], HIGH);
  }
  else
  {
    digitalWrite(LED[4], LOW);
  }
  if(temperatura > 26.00){
    digitalWrite(LED[5], HIGH);
  }
  else
  {
    digitalWrite(LED[5], LOW);
  }
  if(temperatura > 26.50){
    digitalWrite(LED[6], HIGH);
  }
  else
  {
    digitalWrite(LED[6], LOW);
  }
  if(temperatura > 27.00){
    digitalWrite(LED[7], HIGH);
  }
  else
  {
    digitalWrite(LED[7], LOW);
  }
  if(temperatura > 27.50){
    digitalWrite(LED[8], HIGH);
  }
  else
  {
    digitalWrite(LED[8], LOW);
  }
  if(temperatura > 28.00){
    digitalWrite(LED[9], HIGH);
    tone(Buzzer, 2000);
  }
  else
  {
    digitalWrite(LED[9], LOW);
    noTone(Buzzer);
  }
 Serial.print("Temperatura: ");
 Serial.print(temperatura);
 Serial.print("°C");
 Serial.println();

}