#include <ARSC_Motores.h>
#include <AR_SensorDePista.h>

int pista;

void setup() {
  AR_InitMotores(11,13,3,12); 
  AR_InitSensorPista3(5,6,7);

}

void loop() {
  pista=AR_LerSensorPista3();
  SeguePista();
}


void SeguePista()
{
  if (pista=4)
  {
    AR_MotorDir(255, FRENTE);
    AR_MotorEsq(255, FRENTE);
  }
  if (pista=6)
  {
    AR_MotorDir(150, FRENTE);
    AR_MotorEsq(255, FRENTE);
  }
  if (pista=2)
  {
    AR_MotorDir(100, FRENTE);
    AR_MotorEsq(255, FRENTE);
  }
  if (pista=3)
  {
    AR_MotorDir(0, FRENTE);
    AR_MotorEsq(255, FRENTE);
  }
  if (pista=1)
  {
    AR_MotorDir(100, TRAS);
    AR_MotorEsq(255, FRENTE);
  }
  if (pista=12)
  {
    AR_MotorDir(255, FRENTE);
    AR_MotorEsq(150, FRENTE);
  }
  if (pista=8)
  {
    AR_MotorDir(255, FRENTE);
    AR_MotorEsq(100, FRENTE);
  }
  if (pista=24)
  {
    AR_MotorDir(255, FRENTE);
    AR_MotorEsq(0, FRENTE);
  }
  if (pista=16)
  {
    AR_MotorDir(255, FRENTE);
    AR_MotorEsq(100, TRAS);
  }
}
