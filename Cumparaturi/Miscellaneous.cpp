#include "Miscellaneous.h"


string Miscellaneous::getInfo() {
	string info = to_string(count);
	info += " items";
	return info;
}
void Miscellaneous::setCount(int count) {
	this->count = count;
}