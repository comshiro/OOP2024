#include "StringData.h"
#include<string>
#include<iostream>
using namespace std;

StringData::StringData(string name, string value):Entry(name) {
	this->value = value;
}

void StringData::Add(string toAdd) {
	value = value + toAdd;
}
bool StringData::Substract(int toSubstract) {
	if (toSubstract <= value.length())
	{
		value = value.substr(0, value.length() - toSubstract);
		return true;
	}
	else {
		cout << "StringData: len(" << value << ") < " << toSubstract;
		return false;
	}
}

void StringData::Print() {
	cout << name << " = " << value << ";";
}