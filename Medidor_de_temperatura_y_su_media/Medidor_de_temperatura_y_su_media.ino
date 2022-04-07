#include <OneWire.h>
#include <DallasTemperature.h>

const int oneWirePin = 5;

OneWire oneWireBus(oneWirePin);
DallasTemperature sensor(&oneWireBus);
   
float temperaturaM;
float nuevoDato;
float mediciones = 1;  
    
     

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
