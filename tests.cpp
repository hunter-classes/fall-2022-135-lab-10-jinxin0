#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"

const Time t1{12, 00};
const Time t2{10, 30};
const Time t3{13, 40};
const Time t4{11, 34};

TEST_CASE("Task A")
{
    CHECK(minutesSinceMidnight(t1) == 720);
    CHECK(minutesSinceMidnight(t4) == 694);
    CHECK(minutesUntil(t2, t3) == 190);
}

TEST_CASE("Task B")
{
    CHECK(addMinutes(t1, 59) == Time{12, 59});
    CHECK(addMinutes(t1, 60) == Time{13, 00});
}
