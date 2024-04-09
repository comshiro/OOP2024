#include <iostream>

class Number
{
private:
    char* value;
    int base;

public:
    Number() {};
    Number(const char* value, int base);
    Number(char* value, int base);
    Number(int value, int base = 10);
    ~Number();

    Number(const Number& other); //cpy ctr
    Number(Number&& other) noexcept;

    Number& operator=(Number&& other) noexcept; // Move assignment operator

    friend Number operator+(const Number& num1, const Number& num2);
    friend Number operator-(const Number& num1, const Number& num2);

    char operator[](int index) const;

    bool operator<(const Number& other) const;
    bool operator==(const Number& other) const;

    Number& operator--();
    Number operator--(int);

    void SwitchBase(int newBase);
    char* ConvertBase(int base, char* value, int needed_base);
    void Print() const;
    int GetDigitsCount() const;
    int GetBase() const;
};

