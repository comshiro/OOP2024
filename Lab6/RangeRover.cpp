#include "RangeRover.h"

RangeRover::RangeRover() {
    fuel_capacity = 80.0;
    fuel_consumption = 0.08;
    avg_speed[0] = 85.0; // Rain
    avg_speed[1] = 105.0; // Sunny
    avg_speed[2] = 65.0; // Snow
}

double RangeRover::CalculateTime(double circuit_length, Weather weather) {
    return Car::CalculateTime(circuit_length, weather);
}
