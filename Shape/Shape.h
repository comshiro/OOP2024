#pragma once
#include <string>

using namespace std;

class Shape {
protected:
	string name;
public:
	virtual string GetName() = 0;
};