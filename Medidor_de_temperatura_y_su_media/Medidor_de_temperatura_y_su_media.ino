#include <OneWire.h>
#include <DallasTemperature.h>

int Pin1 = 5;
int Pin2 = 6;
int Pin3 = 7;

OneWire oneWireBus(Pin1);
DallasTemperature sensor(&oneWireBus);
   
float temperaturaM;
float nuevoDato;
int mediciones = 1;  
    
     

void setup() {
  
  Serial.begin(9600);
   sensor.begin(); 
}


void loop() {
 

  float T = (sensor.getTempCByIndex(0) + temperaturaM);

  float media = T /mediciones;

  sensor.requestTemperatures();

  
  Serial.print("Temperatura Actual:  ");
  Serial.println(sensor.getTempCByIndex(0));
  
  Serial.print("Temperatura Media:  ");
  Serial.println(media);

  Serial.print("Número de mediciones:  ");
  Serial.println(mediciones);

  Serial.println("");
  
  mediciones++;

  delay(2000);

  temperaturaM = T;
  
  
}
