#include <sensor.h>
#include <motors.h>

int pista;

void setup() {
  initmot(11,13,3,12); 
  sensorInit(5,6,7);
}

void loop() {
  pista=readSensor();   //ler sensor
  SeguePista();
}


void SeguePista()
{
  if (pista==5)         //seguir em frente
  {
    mDir(255, front);
    mEsq(255, front);
  }
  if (pista==3)         //virar muito à esquerda
  {
    mDir(50, front);
    mEsq(255, front);
  }
  if (pista==6)         //virar muito à direita
  {
    mDir(255, front);
    mEsq(50, front);
  }         
  if (pista==4)         //virar à esquerda
  {
    mDir(150, front);
    mEsq(255, front);
  }
  if (pista==1)         //virar à direita
  {
    mDir(255, front);
    mEsq(150, front);
  }
}
 
