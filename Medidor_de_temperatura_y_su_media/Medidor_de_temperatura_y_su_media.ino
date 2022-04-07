const int  Pin = A0;    
float temperaturaM;   
float temperaturaActual;
float nuevoDato;
float mediciones = 1;  
    
     

void setup() {
  
  pinMode(Pin, INPUT); 
  Serial.begin(9600);
}


void loop() {
 
  temperaturaActual = digitalRead(Pin);

  float T = (temperaturaActual + temperaturaM);

  float media = T /mediciones;

  
  Serial.print("Temperatura Actual:  ");
  Serial.println(temperaturaActual);
  
  Serial.print("Temperatura Media:  ");
  Serial.println(media);

  Serial.print("Número de mediciones:  ");
  Serial.println(mediciones);

  Serial.println("");
  
  mediciones++;

  delay(2000);

  temperaturaM = T;
  
  
}
