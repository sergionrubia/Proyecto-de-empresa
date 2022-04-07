#include <OneWire.h>
#include <DallasTemperature.h>

int Pin = 5;

OneWire oneWireBus(Pin);
DallasTemperature sensors(&oneWireBus);

DeviceAddress Sensor1 = { 0x28, 0xFF, 0xB6, 0x39, 0x84, 0x16, 0x04, 0x9B };
DeviceAddress Sensor2 = { 0x28, 0x24, 0x23, 0x60, 0x09, 0x00, 0x00, 0xDC };
DeviceAddress Sensor3 = { 0x28, 0xFF, 0xB4, 0x32, 0x84, 0x16, 0x05, 0xD2 };


void setup(void)
{
  Serial.begin(9600);
  sensors.begin();
  sensors.setResolution(Sensor1, 10);
  sensors.setResolution(Sensor2, 10);
  sensors.setResolution(Sensor3, 10);
}

void printTemperature(DeviceAddress deviceAddress)
{
  float tempC = sensors.getTempC(deviceAddress);
  if (tempC == -127.00) {
    Serial.print("Error getting temperature");
  } else {
    Serial.print(tempC);
   Serial.println(" ºC");
  }
}

void loop(void)
{ 

  Serial.println("Leyendo temperaturas");
  sensors.requestTemperatures();
  
  Serial.print("Temperatura 1: ");
  printTemperature(Sensor1);
  Serial.print("Temperatura 2: ");
  printTemperature(Sensor2);
  Serial.print("Temperatura 3: ");
  printTemperature(Sensor3);
  Serial.println("-------");
  
  delay(2000);
}
