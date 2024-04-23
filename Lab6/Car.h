#include "Weather.h"
class Car{
protected:
    double fuel_capacity; 
    double fuel_consumption; 
    double avg_speed[3]; 
public:
    virtual double CalculateTime(double circuit_length, Weather weather) = 0;
};
