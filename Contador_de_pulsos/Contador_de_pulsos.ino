const int  Pin = 2;    
int contador = 0;   
int estadoActual = 0;         
int estadoAnterior = 0;     

void setup() {
  
  pinMode(Pin, INPUT); 
  Serial.begin(9600);
}


void loop() {
 
  estadoActual = digitalRead(Pin);

 
  if (estadoActual != estadoAnterior) {
    
    if (estadoActual == HIGH) {
      
      contador++;
      Serial.println("Pulsado");
      Serial.print("Contador:  ");
      Serial.println(contador);
    } 
    else {
      
      Serial.println("No pulsado"); 
    }
  }
  
  estadoAnterior = estadoActual;
  
  
  
}
