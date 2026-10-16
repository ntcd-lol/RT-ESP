#include "Arduino.h"
#include "config/Config.h"

#if   defined(SIMWIN)
    #include "win/main.h"
#elif defined(SIMLINUX)
    #include "linux/main.h"
#elif defined(SIMMAC)
    #include "mac/main.h"
#elif !SIMULATED
    #error "Bro, wtf is your platform?"
#endif

#ifndef SIMULATED
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Hello world!");
    delay(1000);
}
#else
int main() {
    #if     defined(SIMWIN)
        simWin();
    #elif defined(SIMLINUX)
        simLinux();
    #elif   defined(SIMMAC)
        simMac();
    #else
        #error "Bro, wtf is your platform?"
    #endif

    return 0;
}
#endif
