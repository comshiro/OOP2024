#include "Parcare.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


void Parcare::Create(int maxCapacity) {
	masini.reserve(maxCapacity);
}

bool Parcare::Add(Masina* masina) {
	if (masini.capacity() > masini.size())
	{
		masini.push_back(masina);
		return true;
	}
	return false;
}
void Parcare::RemoveByName(string name)
{
	for (auto i = masini.begin(); i != masini.end(); ++i) {
		if (name == (*i)->GetName()) {
			masini.erase(i);
			i = masini.begin();
		}
	}
}


int  Parcare::GetCount() {
	return masini.size();

}

bool Parcare::IsFull() {
	return masini.size() == masini.capacity();
}

void  Parcare::ShowAll() {
	cout<< " SHOW-ALL: ";
	for (auto masina : masini)
		 cout << masina->GetName() << "(" << masina->GetColor()<< ")";
		 cout << endl;
}
void Parcare::ShowByColor(string color) {
	cout << " SHOW-COLOR (" << color << ")";
	for (auto masina : masini)
		cout << masina->GetName() << ", ";
		cout << endl;
}