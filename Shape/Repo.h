#pragma once
#include <vector>
#include "Shape.h"
class Repo
{
	vector<Shape*> shapes;
public:
	Shape* GetShape(string shapeType, string color);
	void Add(Shape*);
	void Remove(string info);
	void PrintAll();

};

