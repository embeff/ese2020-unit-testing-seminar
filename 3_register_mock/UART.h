#pragma once

#include "registers.h"
#include <cstdint>

struct UART {
	void send(uint8_t value) {
		UCB1TXBUF = value;
	}
	uint8_t read() {
		return UCB1RXBUF;
	}
};