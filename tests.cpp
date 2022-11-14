#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "movie.h"
#include "time.h"
#include "timeslot.h"

const Time t1{12, 00};
const Time t2{10, 30};
const Time t3{13, 40};
const Time t4{11, 34};

Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};

TimeSlot morning = {movie1, {9, 15}};
TimeSlot daytime = {movie2, {12, 15}};
TimeSlot evening = {movie2, {16, 45}}; 
TimeSlot morning2 = {movie2, {10, 10}};

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

TEST_CASE("Task C")
{
    CHECK(morning.getTimeSlot() == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
    CHECK(daytime.getTimeSlot() == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
    CHECK(evening.getTimeSlot() == "Black Panther ACTION (134 min) [starts at 16:45, ends by 18:59]");
}

TEST_CASE("Task D")
{
    CHECK(morning.scheduleAfter(movie2).getTimeSlot() == "Black Panther ACTION (134 min) [starts at 11:11, ends by 13:25]"); 
    CHECK(evening.scheduleAfter(movie1).getTimeSlot() == "Back to the Future COMEDY (116 min) [starts at 18:59, ends by 20:55]");
}

TEST_CASE("Task E")
{
    CHECK(morning.timeOverlap(daytime) == false);
    CHECK(morning.timeOverlap(morning2) == true);
}
