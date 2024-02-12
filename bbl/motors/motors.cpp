#include <Arduino.h>

int pwm_d;
int dir_d;
int pwm_e;
int dir_e;

void initmot(int _pwm_d, int _dir_d, int _pwm_e, int _dir_e)
{
  pwm_d = _pwm_d;
  pwm_e = _pwm_e;
  dir_d = _dir_d;
  dir_e = _dir_e;
  pinMode(pwm_d, OUTPUT);
  pinMode(pwm_e, OUTPUT);
  pinMode(dir_d, OUTPUT);
  pinMode(dir_d, OUTPUT);
}

void mDir(unsigned char PWM, unsigned char DIR)
{
  digitalWrite(dir_d, DIR);
  analogWrite(pwm_d, PWM);
}

void mEsq(unsigned char PWM, unsigned char DIR)
{
  digitalWrite(dir_e, DIR);
  analogWrite(pwm_e, PWM);
}