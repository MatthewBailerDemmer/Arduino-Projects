const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
const int Buzzer = 12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
analogReference(INTERNAL1V1);
pinMode(Buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817;
  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.println(" *C");
  if(temperatura > 26)
  {
    tone(Buzzer, 2000);
  }
  else
  {
    noTone(Buzzer);
  }
  
  delay(1000);
   
 
  
}
