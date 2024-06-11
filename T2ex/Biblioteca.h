#pragma once
#include <stdio.h>
#include "Carte.h"
#include<vector>
using namespace std;

class Biblioteca
{
	int count;
	std::vector<Carte*> carti;

public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator +=(Carte& c);
	vector<Carte*>::iterator begin();
	vector<Carte*>::iterator end();
	operator int();
	PrintFilter( );
	
};

