#pragma once

union UCB1TXBUF_t
{
	unsigned char _UCB1TXBUF__SPI;
	unsigned char _UCB1TXBUF;
};
extern UCB1TXBUF_t UCB1TXBUF_double;
#define UCB1TXBUF UCB1TXBUF_double._UCB1TXBUF


struct UCB1RXBUF_c {
	char value;
	
	char& operator*() {
		return value;
	}
};
extern UCB1RXBUF_c UCB1RXBUF_double;
#define UCB1RXBUF__SPI *UCB1RXBUF_double
#define UCB1RXBUF *UCB1RXBUF_double