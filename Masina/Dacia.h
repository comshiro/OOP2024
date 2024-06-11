#pragma once
#include "MasinaOras.h"
#include <string>
using namespace std;
class Dacia : public MasinaOras
{
	int capacitate;
	string culoare;
public:
	string getName();
	int getCapacitate();
	string getCuloare();
	void setCapacitate(int capacitate);
	void setCuloare(string culoare);
};

