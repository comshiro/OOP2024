#pragma once
#include "Masina.h"
#include<string>
using namespace std;

class Toyota : public Masina
{
	string color;
public:
	Toyota(string color);
	string GetColor();
	string GetName();
};

