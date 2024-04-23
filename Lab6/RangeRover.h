#pragma once
#include "Car.h"

class RangeRover : public Car {
public:
    RangeRover();
    double CalculateTime(double circuit_length, Weather weather) override;
};
