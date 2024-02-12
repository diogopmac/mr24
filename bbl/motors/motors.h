#define front  1
#define back  0

void initmot(int _pwm_d, int _dir_d, int _pwm_e, int _dir_e);
void mDir(unsigned char PWM, unsigned char DIR);
void mEsq(unsigned char PWM, unsigned char DIR);