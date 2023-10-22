#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 3, 4, 5, 6, 7); // RS, E, D4, D5, D6, D7

int posicao = 15;
boolean noAr = false;
int flagGame = true;
int flag = true;
int velocidade = 500;
int counter = 0;
boolean done = true;

void check0cac(){
  if(posicao == 0 && done){
    lcd.setCursor(posicao,1);
  lcd.write((byte) 1);
  lcd.setCursor(posicao,1);
   lcd.print("_");
    posicao = 15;
    done = false;
  }
}
void check0pit(){
  if(posicao == 0 && !done){
    lcd.setCursor(posicao,1);
  lcd.write((byte) 1);
  lcd.setCursor(posicao,1);
   lcd.print("_");
    posicao = 15;
    done = true;
  }
}



void checkCaught(){
  if(posicao == 3 && !noAr && done){
   
    flagGame = false;
  }
  if(posicao == 3 && noAr && !done){
    flagGame = false;
 
  }
  
}

void jump(){
  lcd.setCursor(3,0);
  lcd.write((byte)0);
   lcd.setCursor(3,1);
   lcd.write("_");
   noAr = true;
   counter = 0;
     detachInterrupt(digitalPinToInterrupt(2));
}
void checkNoAr(){
   if(noAr && counter == 3){
   lcd.setCursor(3,1);
  lcd.write((byte)0);
   lcd.setCursor(3,0);
   lcd.write(" ");
   noAr = false;
   counter  = 0;
   attachInterrupt(digitalPinToInterrupt(2), jump, RISING);
 
  }
}

void throwCactus(){
   lcd.setCursor(posicao,1);
  lcd.write((byte)1);
  posicao--;
}

void throwBird(){
 lcd.setCursor(posicao,0);
lcd.write((byte)2);
 posicao--;
}

void continueGame(){
  if(done){
  lcd.setCursor(posicao + 1,1);
  lcd.print("_");
  }else{
    lcd.setCursor(posicao + 1,0);
  lcd.print(" ");
  }
 check0cac();
 check0pit(); 
 if(done){
 throwCactus();
 }else{
 throwBird();
 }
 checkNoAr();

checkCaught();
  counter++;
  
  delay(velocidade);
}




byte customChar[] = {
  B01111,
  B01101,
  B01111,
  B01100,
  B01100,
  B10010,
  B00000,
  B00000
};

byte customChar1[] = {
   B00100,
  B10100,
  B11111,
  B00101,
  B00100,
  B01110,
  B00000,
  B00000
};

byte customChar2[] = {
  B00100,
  B00100,
  B11111,
  B11101,
  B00100,
  B00100,
  B00000,
  B00000
};
void setup() {
  // put your setup code here, to run once:
  attachInterrupt(digitalPinToInterrupt(2), jump, RISING);

  lcd.clear();
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
  lcd.print("________________");
  lcd.createChar(0, customChar);
   lcd.createChar(1, customChar1);
   lcd.createChar(2, customChar2);
  lcd.setCursor(3,1);
  lcd.write((byte)0);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  if(flagGame){
   continueGame();
  }else{
     if(flag){
     lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Game Over");
    flag = false;
     }
     loop();
  }

}
