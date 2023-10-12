const int led[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
void setup() {
  // put your setup code here, to run once:
  for(int x = 0; x < 10; x++){
    pinMode(led[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
for(int x = 0; x < 10; x++){
  digitalWrite(led[x], HIGH);
  delay(1000);
}
for(int x = 9; x >= 0; x--){
  digitalWrite(led[x], LOW);
  delay(1000);
}
}
