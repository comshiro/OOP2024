#pragma once
#include "Dacia.h"
#include<string>
using namespace std;


Dacia::Dacia(string color) : color(color) {}

string Dacia::GetColor() {
	return color;
	}

string Dacia::GetName() {
	return "Dacia";
}


