#pragma once
#include "Car.h"
#include "Weather.h"

class Volvo : public Car {
public:
    Volvo();
    double CalculateTime(double circuit_length, Weather weather) override;
};
