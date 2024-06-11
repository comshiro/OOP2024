#include <string>
#include "MasinaOras.h"
#include "Masina.h"
#include "Dacia.h"
#include "Opel.h"
#include "SUV.h"
#include "RangeRover.h"
#include <iostream>
using namespace std;

int main()
{
	Opel o;
	o.setCapacitate(100);
	o.setCuloare("rosu");
	o.setAnFabricatie(2000);
	MasinaOras* m = &o;
	cout << m->getName() << "," << m->getCuloare() << "," << m->getCapacitate() << "," << o.getAnFabricatie() << endl;
	return 1;
}