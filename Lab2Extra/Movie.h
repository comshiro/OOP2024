#include <cstring>

class Movie
{
private:
    char name[256];
    int releaseYear;
    float IMDBscore;
    int lenght;


public:
    void set_name(const char* newName);
    string get_name();

    void set_year(int year);
    int get_year();

    void set_score(int score);
    float get_score();

    void set_length(int length);
    float get_length();

    int years_passed();


};

