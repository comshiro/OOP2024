#include <iostream>
#include "Math.h"

int main() {
    std::cout << "Add(8, 2) = " << Math::Add(8, 2) << std::endl;
    std::cout << "Add(5, 3, 7) = " << Math::Add(5, 3, 7) << std::endl;
    std::cout << "Add(2.5, 6.5) = " << Math::Add(2.5, 6.5) << std::endl;
    std::cout << "Add(1.1, 2.2, 3.3) = " << Math::Add(1.1, 2.2, 3.3) << std::endl;
    std::cout << "Mul(4, 5) = " << Math::Mul(4, 5) << std::endl;
    std::cout << "Mul(2, 3, 4) = " << Math::Mul(2, 3, 4) << std::endl;
    std::cout << "Mul(1.5, 2.5) = " << Math::Mul(1.5, 2.5) << std::endl;
    std::cout << "Mul(2.2, 3.3, 4.4) = " << Math::Mul(2.2, 3.3, 4.4) << std::endl;

    std::cout << "Add(6, 8, 0, 2, 4, 5, 3) = " << Math::Add(6, 8, 0, 2, 4, 5, 3) << std::endl;


    std::cout << "Add(\"342\", \"44\") " << Math::Add("342", "44") << std::endl;
}
