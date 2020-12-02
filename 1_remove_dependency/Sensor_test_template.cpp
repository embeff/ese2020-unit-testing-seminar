#define CATCH_CONFIG_MAIN 

#include "catch2/single_include/catch2/catch.hpp"
class UART;
#include "Sensor_template.hpp"
#include "Double/uart.h"

TEST_CASE( "reading value", "[Sensor]" ) {
    auto sensor = Sensor<UART_double>();
    REQUIRE( sensor.getValue() == 0x0505 );
}