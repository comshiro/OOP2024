#include "Circuit.h"
#include "Weather.h"
#include <algorithm>
#include <iostream>

void Circuit::SetLength(double len) {
    length = len;
}

void Circuit::SetWeather(Weather w) {
    weather = w;
}

void Circuit::AddCar(Car* car) {
    cars.push_back(car);
}

void Circuit::Race() {
    for (auto car : cars) {
        double time = car->CalculateTime(length, weather);
        if (time * car->fuel_consumption <= car->fuel_capacity) {
            race_times.push_back(time);
        }
        else {
            cars_did_not_finish.push_back(car);
        }
    }
}

void Circuit::ShowFinalRanks() {
    std::cout << "Final Ranks:\n";

    std::vector<std::pair<size_t, double>> ranked_cars;
    size_t index = 0;
    for (auto& time : race_times) {
        ranked_cars.emplace_back(index++, time);
    }

    std::sort(ranked_cars.begin(), ranked_cars.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
        });

    for (const auto& pair : ranked_cars) {
        size_t index = pair.first;
        double time = pair.second;
        std::cout << "Car " << index + 1 << ": " << time << " hours\n";
    }
}



void Circuit::ShowWhoDidNotFinish() {
    std::cout << "Cars that didn't finish the race due to insufficient fuel:\n";
    for (auto car : cars_did_not_finish) {
        std::cout << "Car with fuel capacity " << car->fuel_capacity << " liters couldn't finish the race.\n";
    }
}
