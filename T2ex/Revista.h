#pragma once
#include "Carte.h"
#include <string>
class Roman :public Carte
{
	std::string titlu;
	int nrArticole;
	std::pair<std::string, int> Revista;

public:
	Revista(std::string, int);
	std::string GetInfo();
};

