int Pin = A0;
float valor;      
int voltaje;   

void setup() {
  Serial.begin(9600);
}

void loop() {
   valor = analogRead(Pin);          
   voltaje = map(valor, 0, 1023, 0, 5000);  

   Serial.print("El Voltaje del potenciometro en mV es: ");
   Serial.println(voltaje);
   
    
   delay(1000);
}
