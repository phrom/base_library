#include <catch.hpp>

#include "feed/library.hpp"

TEST_CASE("Arithmetic works") {
    REQUIRE(sum(1, 1) == 2);
}