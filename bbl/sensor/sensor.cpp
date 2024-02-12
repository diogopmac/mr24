#include <Arduino.h>

int D1;
int D;
int C;
int E;
int E1;

void sensorInit(int _D,int _C,int _E)
{
  D=_D;
  C=_C;
  E=_E;
  pinMode(D,INPUT);
  pinMode(C,INPUT);
  pinMode(E,INPUT);
}

int readSensor()
{
  int s = 0;
  if (digitalRead(E)==0)
    s+=4;
  if (digitalRead(C)==0)
    s+=2;
  if (digitalRead(D)==0)
    s+=1;
  return s;
}