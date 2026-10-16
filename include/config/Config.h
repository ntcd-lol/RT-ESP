#pragma once
#include <cstdint>

#ifdef SERIAL_BAUD
    constexpr uint32_t BOARD_BAUD_RATE = SERIAL_BAUD;
#else
    constexpr uint32_t BOARD_BAUD_RATE =      115200;
#endif

#ifdef defined(SIMWIN) || defined(SIMLINUX) || defined(SIMMAC)
    #define SIMULATED 1
#else
    #define SIMULATED 0
#endif
