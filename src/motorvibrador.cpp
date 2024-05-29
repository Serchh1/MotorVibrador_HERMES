#include <Arduino.h>
#include "motorvibrador.h"

motorVibrador::motorVibrador(int pinMotor)
{
    m_pinMotor = pinMotor;
    pinMode(m_pinMotor, OUTPUT);
}

void motorVibrador::controlmotor(int pwm)
{
    analogWrite(m_pinMotor, constrain(pwm, VALOR_MINIMO, VALOR_MAXIMO));
}
