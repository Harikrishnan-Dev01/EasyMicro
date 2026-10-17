
#include <EasyMicro.h>

void setup() {
    ledsetup(2);
}

void loop() {
    led(2, on);
    wait(1);

    led(2, off);
    waitms(500);
}
