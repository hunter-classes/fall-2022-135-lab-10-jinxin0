#pragma once

#include "movie.h"
#include "time.h"

class TimeSlot {
public:
    Movie movie;     // what movie
    Time startTime;  // when it starts

    std::string getTimeSlot()
    {
        return movie.getMovie() + " [starts at " + startTime.toString() + ", ends by " + addMinutes(startTime, movie.duration).toString() + ']';
    }

    TimeSlot scheduleAfter(Movie nextMovie)
    {
        return {nextMovie, addMinutes(startTime, movie.duration)};
    }
};

