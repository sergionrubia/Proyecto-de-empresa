
int Pin = 0;
float valor;
float voltaje;
float Nvoltaje;
float intensidad;
float Irms;
int Nsamples = 0;
float Tintensidad;
int x = 0;

void setup(){

  Serial.begin(9600);
  pinMode(Pin,INPUT);
  Irms = 0;
  
  
  
}

void loop(){
  
    
    valor = analogRead(Pin);
    voltaje = map(valor, 0, 1023, 0, 5000);
    Nvoltaje = (voltaje-2500);
    int y = abs(Nvoltaje);        
    intensidad = (y * 2000.0) / 100000;

    Tintensidad = Tintensidad + intensidad;

    Nsamples++;

    

    if (millis() %  1000 == 0){

      Irms = Tintensidad / Nsamples;

      Serial.print("La intensidad es: ");
      Serial.println(Irms);

      Nsamples = 0;
      Tintensidad = 0;
      
    }

    
  delay(1);
}
