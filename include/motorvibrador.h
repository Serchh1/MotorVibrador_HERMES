#pragma once

#define SENS_BAJA 50
#define SENS_MEDIA 86
#define SENS_ALTA 200
#define SENS_MAX 255
#define ON 255
#define OFF 0

class motorVibrador 
{
    
public:
    motorVibrador(int pinMotor); //Constructor de la Clase
    void controlmotor(int pwm); //"pwm" es el valor de entrada para hacer vibrar el motor

private:
    int m_pinMotor; //Pin conectado al transistor

};