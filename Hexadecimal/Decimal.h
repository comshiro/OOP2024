#pragma once
#include <string>
#include "Printer.h"

using namespace std;

class Decimal :public Printer
{
	string GetFormatName();
	string FormatNumber(int number);
};

