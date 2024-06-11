#include "Biblioteca.h"
#include "Carte.h"
#include <vector>
using namespace std;

inline Biblioteca::Biblioteca() {
	count = 0;
	carti = new Carte * [100];
}
Biblioteca::~Biblioteca() {
	delete carti[]
}
Biblioteca& Biblioteca::operator +=(Carte& c) {
	
	carti.push_back();
}
vector<Carte*>::iterator Biblioteca::begin() {
	return carti.begin();
}
vector<Carte*>::iterator Biblioteca::end() {
	return carti.end();
}
Biblioteca::operator int() {
	return count;
}

void Biblioteca::PrintFilter() {

}