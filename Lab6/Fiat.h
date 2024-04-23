#pragma once
#include "Car.h"

class Fiat : public Car {
public:
    Fiat();
    double CalculateTime(double circuit_length, Weather weather) override;
};
