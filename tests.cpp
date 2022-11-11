#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"

TEST_CASE("Task A")
{
    CHECK(minutesSinceMidnight({12, 00}) == 720);
    CHECK(minutesSinceMidnight({11, 34}) == 694);
    CHECK(minutesUntil({10, 30}, {13, 40}) == 190);
}
