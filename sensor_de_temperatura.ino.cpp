#include <Arduino.h>
#line 1 "C:\\Users\\edvic\\Documents\\SALLE\\proteus\\semaforo_arduino\\sensor_de_temperatura\\sensor_de_temperatura.ino"
float v=0;
float T=0.0;
#line 3 "C:\\Users\\edvic\\Documents\\SALLE\\proteus\\semaforo_arduino\\sensor_de_temperatura\\sensor_de_temperatura.ino"
void setup();
#line 10 "C:\\Users\\edvic\\Documents\\SALLE\\proteus\\semaforo_arduino\\sensor_de_temperatura\\sensor_de_temperatura.ino"
void loop();
#line 3 "C:\\Users\\edvic\\Documents\\SALLE\\proteus\\semaforo_arduino\\sensor_de_temperatura\\sensor_de_temperatura.ino"
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  v=analogRead(A0);
  T=(v*95)/1023;
  Serial.print("la temperatura es :");
  Serial.print(T);
  Serial.println("C");
  delay(1000);
  

}

