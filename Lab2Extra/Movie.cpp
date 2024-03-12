#include <iostream>
#include <cstring>
#include "Movie.h"

void Movie::set_name(const char* newName)
{
    strncpy(name, newName, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
}

string Movie::get_name() 
{
    return name;
}

void Movie::set_year(int year)
{
    releaseYear = year;
}

int Movie::get_year() const
{
    return releaseYear;
}

void Movie::set_score(float score)
{
    IMDBscore = score;
}

float Movie::get_score()
{
    return IMDBscore;
}

void Movie::set_length(int movieLength)
{
    length = movieLength;
}

int Movie::get_length() 
{
    return length;
}

int get_current_year() {
    using namespace std::chrono;
    return static_cast<int>(
        year_month_day{ time_point_cast<days>(system_clock::now()) }.year());
}

int Movie::years_passed() 
{
    currentYear = get_current_year();
    return currentYear - releaseYear;
}

