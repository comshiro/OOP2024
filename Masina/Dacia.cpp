#include "Dacia.h"
#include <string>

using namespace std;

string Dacia::getName() {
	return "Dacia";
}
int Dacia::getCapacitate() {
	return this->capacitate;
}
string Dacia::getCuloare() {
	return this->culoare;
}

void Dacia::setCapacitate(int capacitate) {
	this->capacitate = capacitate;
}

void Dacia::setCuloare(string culoare) {
	this->culoare = culoare;
}