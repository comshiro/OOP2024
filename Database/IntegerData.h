#pragma once
#include "Entry.h"
#include<string>

using namespace std;

class IntegerData:public Entry
{
	int value;
public:
	IntegerData(string name, string value);
	void Add(string toAdd);
	bool Substract(int toSubstract);
	void Print();
};
