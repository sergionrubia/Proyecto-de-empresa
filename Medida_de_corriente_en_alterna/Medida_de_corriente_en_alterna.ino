
int Pin = 0;
int valor;
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
  
    Nsamples = 0;
    Tintensidad = 0;
    unsigned long time = millis();

    while (millis() < (time + 80)){
      
      valor = analogRead(Pin);
      // Serial.println("valor:");Serial.println(valor);
      //Serial.println("millis():");Serial.println(millis());
      
      voltaje = map(valor, 0, 1023, 0, 5000);
      Nvoltaje = (voltaje-2500);
      int y = abs(Nvoltaje);        
      intensidad = (y * 2000.0) / 100000;
  
      Tintensidad = Tintensidad + intensidad;
  
      Nsamples++;
    }

    Irms = Tintensidad / Nsamples;

    Serial.print("La intensidad es: ");
    Serial.println(Irms);
    Serial.print("Tintensidad: ");
    Serial.println(Tintensidad);
    Serial.print("Nsamples: ");
    Serial.println(Nsamples);   
    delay(1000);
}
