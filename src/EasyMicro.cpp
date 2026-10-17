
#include "EasyMicro.h"

void ledsetup(uint8_t pin) {
    pinMode(pin, OUTPUT);
}

void led(uint8_t pin, uint8_t state) {
    if (state == on) {
        digitalWrite(pin, HIGH);
    }
    else if (state == off) {
        digitalWrite(pin, LOW);
    }
}

void wait(unsigned long seconds) {
    delay(seconds * 1000UL);
}

void waitms(unsigned long milliseconds) {
    delay(milliseconds);
}
