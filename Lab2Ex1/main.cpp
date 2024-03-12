#include "NumberList.h"
#include <iostream>

int main()
{
    NumberList myList;
    myList.Init();

    for (int i = 9; i >= 0; i++)
        myList.Add(i);

    if (!myList.Add(11))
    {
        std::cout << "Nu se poate" << std::endl;
    }

    myList.Sort();
    myList.Print();

    return 0;
}