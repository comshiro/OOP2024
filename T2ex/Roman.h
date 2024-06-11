#pragma once
#include "Carte.h"
#include <string>
class Roman:public Carte
{
	std::string nume;
	std::string autor;

public:
	Roman(std::string, std::string);
	std::string GetInfo();
};

