#pragma once
#include<string>
#include "Entry.h"
#include<vector>
#include<iostream>
using namespace std;


class Database
{
	vector<Entry*>entries;

public:
	Database& operator+=(Entry*);
	void operator-=(string name);
	vector<Entry*>::iterator begin();
	vector<Entry*>::iterator end();
	void Print();
};

