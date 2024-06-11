#include "Toyota.h"
#include<string>
using namespace std;

Toyota::Toyota(string color) : color(color) {}

string Toyota::GetColor() {
	return color;
}

string Toyota::GetName() {
	return "Toyota";
}

