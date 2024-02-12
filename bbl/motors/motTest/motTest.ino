#include <motors.h>

void setup() {
//initmot(PWM_D,DIR_D,PWM_E,DIR_E);
//              (PWM_B,DIR_B,PWM_A,DIR_A);
  initmot(11,13,3,12);
}

void loop() {
  mDir(100, front);
  mEsq(0,front);
  delay(1000);
  mDir(255,front);
  mEsq(0,front);
  delay(1000);
  mDir(100,back);
  mEsq(0,back);
  delay(1000);
  mDir(0,front);
  mEsq(100,front);
  delay(1000);
  mDir(0,front);
  mEsq(255,front);
  delay(1000);
  mDir(0,back);
  mEsq(100,back);
  delay(1000);
}