#pragma once
#include "Car.h"
#include "Weather.h"
#include <vector>

class Circuit {
private:
    double length; 
    Weather weather;
    std::vector<Car*> cars;
    std::vector<double> race_times;
    std::vector<Car*> cars_did_not_finish;
public:
    void SetLength(double len);
    void SetWeather(Weather w);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};
