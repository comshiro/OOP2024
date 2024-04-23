#include "Seat.h"

Seat::Seat() {
    fuel_capacity = 55.0;
    fuel_consumption = 0.04;
    avg_speed[0] = 75.0; // Rain
    avg_speed[1] = 95.0; // Sunny
    avg_speed[2] = 55.0; // Snow
}

double Seat::CalculateTime(double circuit_length, Weather weather) {
    return Car::CalculateTime(circuit_length, weather);
}
