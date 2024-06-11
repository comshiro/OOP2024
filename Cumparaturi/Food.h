#pragma once
#include <string>
#include "Item.h"
using namespace std;

class Food:public Item
{
	float quantity;
public:
	void setQuantity(float quantity);
	string getInfo();
};

