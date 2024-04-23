#include "Volvo.h"

Volvo::Volvo() {
    fuel_capacity = 60.0;
    fuel_consumption = 0.05;
    avg_speed[0] = 80.0; // Rain
    avg_speed[1] = 100.0; // Sunny
    avg_speed[2] = 60.0; // Snow
}

double Volvo::CalculateTime(double circuit_length, Weather weather) {
    return Car::CalculateTime(circuit_length, weather);
}
