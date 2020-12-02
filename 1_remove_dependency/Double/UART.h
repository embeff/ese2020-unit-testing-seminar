#pragma once
#include <stdint.h>

// struct UART;

struct UART_double {
    void send(uint8_t value);
    uint8_t read();
};