#include "Opel.h"
#include <string>
using namespace std;



string Opel::getName() {
	return "Opel";
}
int Opel::getCapacitate() {
	return capacitate;
}
string Opel::getCuloare() {
	return culoare;
}

void Opel::setCapacitate(int capacitate) {
	this->capacitate = capacitate;
}
void Opel::setCuloare(string culoare) {
	this->culoare = culoare;
}
void Opel::setAnFabricatie(int an) {
	this->anFabricatie = an;
}
int Opel::getAnFabricatie() {
	return anFabricatie;
}