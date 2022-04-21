
int Pin = 0;
float valor;
float voltaje;
float Nvoltaje;
float intensidad;
float Nintensidad;


void setup(){

  Serial.begin(9600);
  
}

void loop(){

  valor = analogRead(Pin);
  voltaje = map(valor, 0, 1023, 0, 5000);
  Nvoltaje = (voltaje-2500);
  intensidad = Nvoltaje / 100000;
  Nintensidad = intensidad * 2000;

  Serial.print("La intensidad es: ");
  Serial.print(Nintensidad,3);
  
}
