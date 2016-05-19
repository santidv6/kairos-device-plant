
/*
Título: Lectura básica de sensores de humedad y luminosidad de una planta(ción).
Autor: santidv6
Fecha: 14/05/2016
URL: https://github.com/santidv6/kairos-device-plant
email: santidv6@gmail.com
*/

#define moisensor A1
#define LDR	A2

int moisture;
int luminance;

void setup(){
  pinMode(moisensor, INPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
  delay(200);
}
void loop(){
  moisture= map(analogRead(moisensor),1023,0,0,100);
  luminance = map(analogRead(LDR),0,1023,0,32000);
  Serial.print("moisture: ");
  Serial.print(moisture);
  Serial.print("%\t");
  Serial.print("lux: ");
  Serial.print(luminance);
  Serial.println("lx");
  delay(200);
}
