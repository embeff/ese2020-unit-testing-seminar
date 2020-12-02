#include <stdint.h>
#include "uart.h"

const uint8_t GET_VALUE = 0xAA;

struct Sensor {
  UART communicationInterface;
  uint16_t getValue(){
    uint16_t tmp = 0;
    communicationInterface.send(GET_VALUE);
    tmp = communicationInterface.read() << 8;
    tmp |= communicationInterface.read();
    return tmp;
  }
  //...
};