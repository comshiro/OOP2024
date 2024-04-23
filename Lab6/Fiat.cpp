#include "Fiat.h"

Fiat::Fiat() {
    fuel_capacity = 50.0;
    fuel_consumption = 0.03;
    avg_speed[0] = 70.0; // Rain
    avg_speed[1] = 90.0; // Sunny
    avg_speed[2] = 50.0; // Snow
}

double Fiat::CalculateTime(double circuit_length, Weather weather) {
    return Car::CalculateTime(circuit_length, weather);
}
