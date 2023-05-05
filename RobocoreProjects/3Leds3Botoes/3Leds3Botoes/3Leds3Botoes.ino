const int ledPin12 = 12;
const int ledPin11 = 11;
const int ledPin9 = 9;

const int Botao2 = 2;
const int Botao3 = 3;
const int Botao4 = 4;

int EstadoBotao2, EstadoBotao3 = 0;
int aux, aux1 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin9, OUTPUT);

  pinMode(Botao2, INPUT);
  pinMode(Botao3, INPUT);
  pinMode(Botao4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin9, digitalRead(Botao2));
  digitalWrite(ledPin11, digitalRead(Botao3));
  digitalWrite(ledPin12, digitalRead(Botao4));

}
