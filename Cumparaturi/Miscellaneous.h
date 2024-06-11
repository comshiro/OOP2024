#pragma once
#include <string>
#include "Item.h"
using namespace std;


class Miscellaneous:public Item
{
	int count;

public:

	string getInfo();
	void setCount(int count);
};

