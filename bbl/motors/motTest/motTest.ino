#include <motors.h>

void setup() {
//initmot(PWM_D,DIR_D,PWM_E,DIR_E);
//              (PWM_B,DIR_B,PWM_A,DIR_A);
  initmot(11,13,3,12);
}

void loop() {
  mDir(255, front);
  mEsq(255, front);
}