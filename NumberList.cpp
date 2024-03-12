#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
    count = 0;
}

bool NumberList::Add(int x)
{
    if (count >= 10)
    {
        return false;
    }

    numbers[count++] = x;
    return true;
}

void NumberList::Sort()
{
    int sorted = 1, counter = count;
    do {

        for(int i = 0; i < counter; i++)
            if (numbers[i] > numbers[i + 1])
            {
                int aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
                sorted = 0;
            }
        counter--;
    } while (sorted == 1);

    
}

void NumberList::Print()
{
    for (int i = 0; i < count; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}