#include "Food.h"
#include <string>

using namespace std;


void Food::setQuantity(float quantity) {
	this->quantity = quantity;
}
string Food::getInfo() {
	string info = to_string(quantity);
	info += " kg";
	return info;
}