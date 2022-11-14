#pragma once

#include <iomanip>
#include <iostream>
#include <string>

class Time 
{
public:
    int h;
    int m;

    bool operator==(const Time& other) const
    {
	return h == other.h && m == other.m;
    }

    std::string toString() const
    {
	std::string s;
        return s + std::to_string(h) + ':' + std::to_string(m); 
    }

    friend std::ostream& operator<<(std::ostream& out, const Time& other)
    {
	out << other.toString();
	return out;
    }
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);

