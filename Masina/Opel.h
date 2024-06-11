#pragma once
#include "MasinaOras.h"
#include <string>
using namespace std;
class Opel : public MasinaOras
{
	int capacitate;
	string culoare;
	int anFabricatie;
public:
	string getName() ;
	int getCapacitate();
	string getCuloare();
	void setCapacitate(int capacitate);
	void setCuloare(string culoare);
	void setAnFabricatie(int an);
	int getAnFabricatie();
};

