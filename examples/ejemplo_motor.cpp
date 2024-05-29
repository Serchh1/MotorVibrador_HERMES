#include <Arduino.h>
#include "motorvibrador.h"
#define PINMOTOR 5

motorVibrador motor1(PINMOTOR);

void setup()
{
;
}

void loop()
{
    motor1.controlmotor(SENS_ALTA);
    delay(2000);

    motor1.controlmotor(VALOR_MINIMO);
    delay(3000);

    motor1.controlmotor(SENS_BAJA);
    delay(2000);
    
    motor1.controlmotor(VALOR_MINIMO);
    delay(3000);

}
