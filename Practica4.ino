const int LED=13;
const int Boton=7;
int ledr = 8;
int leda = 10;
int ledv = 12;
int val;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Boton, INPUT);


  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledv, OUTPUT);
}

void loop() {
  val=digitalRead(Boton);
    if (val==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  if else{
    digitalWrite(LED,LOW);
  }
  else {
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
}
 
