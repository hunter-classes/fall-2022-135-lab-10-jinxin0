#pragma once

#include <string>

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
public:
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes

    std::string getMovie() const
    {
        std::string g;
        switch (genre) 
        {
            case ACTION   : g = "ACTION"; break;
            case COMEDY   : g = "COMEDY"; break;
            case DRAMA    : g = "DRAMA";  break;
            case ROMANCE  : g = "ROMANCE"; break;
            case THRILLER : g = "THRILLER"; break;
        }
        g = title + " " + g + " (" + std::to_string(duration) + " min)";
        return g;
    }
};
