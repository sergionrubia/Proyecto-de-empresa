
int Pin = 0;
float valor;
float voltaje;
float Nvoltaje;
float intensidad;
float Nsamples;
float Irms;

void setup(){

  Serial.begin(9600);
  pinMode(Pin,INPUT);
  Nsamples = 1;
  
}

void loop(){
  
    valor = analogRead(Pin);
    voltaje = map(valor, 0, 1023, 0, 5000);
    Nvoltaje = (voltaje-2500);
    intensidad = Nvoltaje / 100000 * 2000;
    
    
    Irms = (Irms + intensidad)/Nsamples;
    
  if (millis() %  1000 == 0){

    Serial.print("La intensidad es: ");
    Serial.print(Irms,3);
    
  }
  
  

  Nsamples++;
  delay(10);
  
}
