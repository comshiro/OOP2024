
#include <string>
#include "RangeRover.h"
using namespace std;

string RangeRover::getName() {
	return "RangeRover";
}
void RangeRover::setConsum(int consum) {
	this->consum = consum;
}

int RangeRover::getConsum() {
	return consum;
}