#include <catch.hpp>

#include "library/library.hpp"

TEST_CASE("Arithmetic works") {
    REQUIRE(sum(1, 1) == 2);
}