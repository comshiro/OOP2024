#include "Entry.h"
#include<string>

using namespace std;


Entry::Entry(string name) {
	this->name = name;
}

string Entry::GetName() {
	return name;
}