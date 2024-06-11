
#include "SUV.h"
#include <string>
using namespace std;
class RangeRover : public SUV {
	int consum;
public:
	string getName();
	void setConsum(int consum);
	int getConsum();
};

