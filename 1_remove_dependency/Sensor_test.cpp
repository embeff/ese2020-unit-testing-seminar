#define CATCH_CONFIG_MAIN 

#include "catch2/single_include/catch2/catch.hpp"
#include "Sensor.hpp"

TEST_CASE( "reading value", "[Sensor]" ) {
    auto sensor = Sensor();
    REQUIRE( sensor.getValue() == 0x0505 );
}