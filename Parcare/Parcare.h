#pragma once
#include "Masina.h"
#include <string>
#include <vector>
using namespace std;

class Parcare
{
	vector<Masina*>masini;

public:
	void Create(int maxCapacity);
	bool Add(Masina*);
	void RemoveByName(string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(string color);
};

