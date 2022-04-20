void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL1V1);
}

void loop() {  
  int sensorValue = analogRead(A0); //Lectura analógica
  float voltajeSensor = analogRead(A0) * (1.1 / 1023.0); //voltaje del sensor
  float corriente = voltajeSensor*30.0; //corriente=VoltajeSensor*(30A/1V)
  Serial.println(corriente,3);//enviamos por el puerto serie
}
