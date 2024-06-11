#pragma once
#include "Masina.h"
#include<string>
using namespace std;

class Dacia : public Masina
{
	string color;
public:
	Dacia(string color);
	string GetColor();
	string GetName();
};

