#include <cstring>
#include "Movie.h"

int movie_compare_name(const Movie& movie1, const Movie& movie2) {
    return strcmp(movie1.get_name(), movie2.get_name());
}

int movie_compare_year(const Movie& movie1, const Movie& movie2) {
    if (movie1.get_year() < movie2.get_year()) {
        return -1;
    }
    else if (movie1.get_year() > movie2.get_year()) {
        return 1;
    }
    else {
        return 0;
    }
}

int movie_compare_score(const Movie& movie1, const Movie& movie2) {
    if (movie1.get_score() < movie2.get_score()) {
        return -1;
    }
    else if (movie1.get_score() > movie2.get_score()) {
        return 1;
    }
    else {
        return 0;
    }
}

int movie_compare_length(const Movie& movie1, const Movie& movie2) {
    if (movie1.get_length() < movie2.get_length()) {
        return -1;
    }
    else if (movie1.get_length() > movie2.get_length()) {
        return 1;
    }
    else {
        return 0;
    }
}

int movie_compare_passed_years(const Movie& movie1, const Movie& movie2) {
    if (movie1.years_passed() < movie2.years_passed()) {
        return -1;
    }
    else if (movie1.years_passed() > movie2.years_passed()) {
        return 1;
    }
    else {
        return 0;
    }
}
