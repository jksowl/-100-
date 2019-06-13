#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.h"

TEST_CASE("TEST", "HOD")
{
    REQUIRE(game(9, 100, 0) == 1);
    REQUIRE(game(11, 90, 0) == 0);
    REQUIRE(game(9, 7, 0) == 0);
}

TEST_CASE("CHECK", "NICKNAME")
{
    char p[15] = {'a'};
    REQUIRE(CheckNik(p) == 0);
    p[1] = 1;
    p[2] = '2';
    p[4] = '/';
    p[13] = '_';
    p[14] = '+';
    REQUIRE(CheckNik(p) == 1);
}