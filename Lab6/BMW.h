#pragma once
#include "Car.h"

class BMW : public Car {
public:
    BMW();
    double CalculateTime(double circuit_length, Weather weather) override;
};
