int trigger=2;
int echo=3;
int led1=12;
int led2=10;
int led3=8;

void setup() {
  Serial.begin(9600);//Nos deice a que velocidad te comunicas con la compitadora
  pinMode(trigger,OUTPUT);//pin de salida
  pinMode(echo,INPUT);//pin de entrada
  digitalWrite(trigger,LOW);//inicializamos el pin con 0
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  long t;//Tiempo que demora en llegar el echo
  long d;//distancia en centimetros 

  digitalWrite(trigger,HIGH);
  delayMicroseconds(10); //pulso de 10 us
  digitalWrite(trigger,LOW); 

  t=pulseIn(echo,HIGH);
  d=t/59;

  Serial.print("Distancia: ");
  Serial.print(d);
  Serial.print(" cm");
  Serial.println();
  delay(1000);

  if (d>40)
  {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  }
  else if (d>15 && d<30){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }else {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
  }
}
