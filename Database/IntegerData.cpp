#include "IntegerData.h"
#include<iostream>
using namespace std;

IntegerData::IntegerData(string name, string value):Entry(name) { 
	this->value = stoi(value);
}
void IntegerData::Add(string toAdd) {
	
	value = value + stoi(toAdd);
}
bool IntegerData::Substract(int toSubstract) {
	if (value >= toSubstract)
	{
		value -= toSubstract;
		return true;
	}
	return false;
}
void IntegerData::Print() {
	cout << name << " = " << value << ";";
}