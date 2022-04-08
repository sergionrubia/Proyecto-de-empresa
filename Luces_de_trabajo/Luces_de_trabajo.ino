// Práctica encender y apagar varios LEDS a través de botón pulsador y mediante letras.
const int LED1=10;
const int LED2=11;
const int LED3=12;
const int LED4=13;
const int BOTON=7;
int val;
void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(BOTON,INPUT);
}
void loop(){
  val=digitalRead(BOTON);
  if  (val==HIGH){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    delay (200);  
    digitalWrite(LED1,HIGH);
    delay (500);
    digitalWrite(LED2,HIGH);
    delay (500);
    digitalWrite(LED3,HIGH);
    delay (500);
    digitalWrite(LED1,LOW);
    delay (500);
    digitalWrite(LED2,LOW);
    delay (500);
    digitalWrite(LED3,LOW);
    delay (500);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay (200);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay (200);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay (200);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay (200);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay (200);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay (1000);
  }
else { digitalWrite(LED4,HIGH);
  }
if(Serial.available() > 0 ){
      char Dato = Serial.read();
      if(Dato == 'A')   digitalWrite(12,HIGH);
      else if(Dato == 'B') digitalWrite(12,LOW);
      else if(Dato == 'C') digitalWrite(11,HIGH); 
      else if(Dato == 'D') digitalWrite(11,LOW); 
      else if(Dato == 'E') digitalWrite(10,HIGH); 
      else if(Dato == 'F') digitalWrite(10,LOW);   
    }
} 
