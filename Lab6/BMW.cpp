#include "BMW.h"

BMW::BMW() {
    fuel_capacity = 70.0;
    fuel_consumption = 0.06;
    avg_speed[0] = 90.0; // Rain
    avg_speed[1] = 110.0; // Sunny
    avg_speed[2] = 70.0; // Snow
}

double BMW::CalculateTime(double circuit_length, Weather weather) {
    return Car::CalculateTime(circuit_length, weather);
}
