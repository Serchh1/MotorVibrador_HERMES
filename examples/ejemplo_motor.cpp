#include <Arduino.h>
#include "motorvibrador.h"
#define PINMOTOR 5

motorVibrador motor1(PINMOTOR);

void setup()
{
    Serial.begin(115200);
;
}

void loop()
{
    motor1.controlmotor(SENS_ALTA);
    Serial.println("Sens ALta");
    delay(100);
    motor1.controlmotor(SENS_MEDIA);
    Serial.println("Sens Media");
    delay(150);
    motor1.controlmotor(SENS_BAJA);
    Serial.println("Sens Baja");
    delay(180);
    motor1.controlmotor(OFF);
    delay(200);
    motor1.controlmotor(SENS_BAJA);
    Serial.println("Sens Baja");
    delay(200);
    motor1.controlmotor(SENS_MEDIA);
    Serial.println("Sens Media");
    delay(150);
    motor1.controlmotor(OFF);
    delay(200);
}
