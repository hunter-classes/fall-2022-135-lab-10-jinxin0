#include <iostream>
#include "movie.h"
#include "time.h"
#include "timeslot.h"

template<typename T>
void PRINTLN(T x)
{
    std::cout << x << '\n';
}
    
int main()
{
    Time t1{12, 00};
    Time t2{10, 30};
    Time t3{13, 40};

    PRINTLN(minutesSinceMidnight(t1)); // 720
    PRINTLN(minutesUntil(t2, t3)); // 190

    PRINTLN(addMinutes(t1, 59)); // 12:59
    PRINTLN(addMinutes(t1, 60)); // 13:00

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};
    TimeSlot daytime = {movie2, {12, 15}};
    TimeSlot evening = {movie2, {16, 45}}; 
    TimeSlot morning2 = {movie2, {10, 10}};

    PRINTLN(morning.getTimeSlot());
    PRINTLN(daytime.getTimeSlot());
    PRINTLN(evening.getTimeSlot());

    PRINTLN(morning.scheduleAfter(movie2).getTimeSlot());
    PRINTLN(evening.scheduleAfter(movie1).getTimeSlot());

    PRINTLN(morning.timeOverlap(daytime)); // false
    PRINTLN(morning.timeOverlap(morning2)); // true
    return 0;
}
