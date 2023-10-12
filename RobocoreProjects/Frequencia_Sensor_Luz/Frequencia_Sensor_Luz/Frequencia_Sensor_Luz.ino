int ValorSensor = 0;
int nota = 0;
const int Buzzer = 2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ValorSensor = analogRead(A0);
nota = map(ValorSensor, 1023, 0, 1000, 4000);
tone(Buzzer, nota, 20);
Serial.println(nota);

}
