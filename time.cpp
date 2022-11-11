#include "time.h"

int minutesSinceMidnight(Time time)
{
    return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later)
{
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0, int min)
{
    auto minutes = time0.h * 60 + time0.m + min;
    return {minutes / 60, minutes % 60};
}

