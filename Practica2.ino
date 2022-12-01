int ledr = 8;
int leda = 10;
int ledv = 12;
void setup() {
  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledv, OUTPUT);
}

void loop() {
  
  digitalWrite(ledv, HIGH);
  digitalWrite(leda, LOW);
  digitalWrite(ledr, LOW);
  delay(1000);

  digitalWrite(ledv, LOW);
  digitalWrite(leda, HIGH);
  delay(1000);

  digitalWrite(ledr, HIGH);
  digitalWrite(leda, LOW);
  delay(3000);  

}
 
