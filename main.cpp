#include <iostream>
#include "time.h"
    
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
    return 0;
}
