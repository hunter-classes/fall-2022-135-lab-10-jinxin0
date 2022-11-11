#include <iostream>
#include "time.h"
    
template<typename T>
void PRINTLN(T x)
{
    std::cout << x << '\n';
}
    

int main()
{
    PRINTLN(minutesSinceMidnight({12, 00})); // 720
    PRINTLN(minutesUntil({10, 30}, {13, 40})); // 190
    return 0;
}
