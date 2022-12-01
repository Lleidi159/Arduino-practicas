const int led=13;
const int btn=7;
int val;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);

}

void loop() {
  val=digitalRead(btn);
  if(val==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
