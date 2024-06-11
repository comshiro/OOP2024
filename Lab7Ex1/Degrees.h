#pragma once
#include<string.h>
class Value {
    char* val;
public:
    Value(long double x) {
        strcpy(val, "\0");
       while (x) {
            strcat(x)
        }

    }
    char* operator-(int x){
       
        
    }
    char* operator+(int){}
    };
    constexpr float operator""_Kelvin(long double kelvin) {
        return (float)kelvin - 273.15;
    })

    constexpr float operator""_Fahrenheit(long double fahrenheit) {
        return (float)(fahrenheit - 32) * 5 / 9;
    }
