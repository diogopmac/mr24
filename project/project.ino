#include <sensor.h>
#include <motors.h>

int pista;

void setup() {
  initmot(11,13,3,12); 
  sensorInit(5,6,7);

}

void loop() {
  pista=readSensor();
  SeguePista();
}


void SeguePista()
{
  if (pista=4)
  {
    mDir(255, front);
    mEsq(255, front);
  }
  if (pista=6)
  {
    mDir(150, front);
    mEsq(255, front);
  }
  if (pista=2)
  {
    mDir(100, front);
    mEsq(255, front);
  }
  if (pista=3)
  {
    mDir(0, front);
    mEsq(255, front);
  }
  if (pista=1)
  {
    mDir(100, back);
    mEsq(255, front);
  }
  if (pista=12)
  {
    mDir(255, front);
    mEsq(150, front);
  }
  if (pista=8)
  {
    mDir(255, front);
    mEsq(100, front);
  }
  if (pista=24)
  {
    mDir(255, front);
    mEsq(0, front);
  }
  if (pista=16)
  {
    mDir(255, front);
    mEsq(100, back);
  }
}
