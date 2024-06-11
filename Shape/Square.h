#pragma once
#include "Shape.h"
class Square:public Shape
{
	string color;
public:
	Square(string color);
	string GetName();
	string GetColor();

};

