int ledRojo =9;
int ledVerde =10;
int ledAzul=11;
int pinLDR=0;
int valorLDR=0;
void setup() {
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAzul,OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  valorLDR=analogRead(pinLDR);
  Serial.println(valorLDR);
    //Led Rojo  "AMARILLO"
  
  if (valorLDR > 800){
    digitalWrite(ledRojo,255);
    digitalWrite(ledVerde,0);
    digitalWrite(ledAzul,0);
  }
  else {
    if (valorLDR>600 & valorLDR<800){
      digitalWrite(ledRojo,0);
    digitalWrite(ledVerde,255);
    digitalWrite(ledAzul,0);
    }
    else{
    digitalWrite(ledRojo,0);
    digitalWrite(ledVerde,0);
    digitalWrite(ledAzul,255);
    }
  }
}
