#pragma once
#include "Car.h"

class Seat : public Car {
public:
    Seat();
    double CalculateTime(double circuit_length, Weather weather) override;
};
