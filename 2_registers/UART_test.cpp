#include"registers.h"
#include "UART.h"
#include "catch.hpp"

TEST_CASE("reading value", "[UART]") {
	UCB1RXBUF = 0xAB;

	UART uart;
	REQUIRE(uart.read() == 0xAB);
}

TEST_CASE("sending value", "[UART]") {
	UCB1TXBUF = 0;

	UART uart;
	uart.send(0xCD);

	REQUIRE(UCB1TXBUF == 0xCD);
}