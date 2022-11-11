#pragma once

#include <iomanip>
#include <iostream>

class Time 
{
public:
    int h;
    int m;

    bool operator==(const Time& other) const
    {
	return h == other.h && m == other.m;
    }

    friend std::ostream& operator<<(std::ostream& out, const Time& other)
    {
	out << std::setfill('0') << std::setw(2) << other.h << ':' << std::setfill('0') << std::setw(2) << other.m;
	return out;
    }
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
