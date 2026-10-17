
#ifndef EASYMICRO_H
#define EASYMICRO_H

#include <Arduino.h>

#define on HIGH
#define off LOW

void ledsetup(uint8_t pin);
void led(uint8_t pin, uint8_t state);
void wait(unsigned long seconds);
void waitms(unsigned long milliseconds);

#endif
