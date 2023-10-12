const int a = 4;
const int b = 5;
const int c = 6;
const int d = 7;
const int Botao1 = 2;
int num = 0;
void setup(){
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(Botao1 , INPUT);
}
void loop(){
 
 if(digitalRead(Botao1)){
  rodaDado();
 }
}

void rodaDado(){
  num = random(0, 6);
  delay(500);
  switch(num){
 case 0:
 digitalWrite(a, LOW);//DIGITO 0
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 break;
 case 1:
 digitalWrite(a, HIGH);//DIGITO 1
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 break;
 case 2:
 digitalWrite(a, LOW);//DIGITO 2
 digitalWrite(b, HIGH);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 break;
 case 3:
 digitalWrite(a, HIGH);//DIGITO 3
 digitalWrite(b, HIGH);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 break;
 case 4:
 digitalWrite(a, LOW);//DIGITO 4
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 break;
 case 5:
 digitalWrite(a, HIGH);//DIGITO 5
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 break;
 case 6:
 digitalWrite(a, LOW);//DIGITO 6
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 break;
  }
}