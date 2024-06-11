#pragma once
#include <string>
#include "Article.h"
#include <iostream>
using namespace std;
class Apple :public Article
{
	int price;
	int quantity;
	string country;
public:
	Apple(int price, int quantity, string country);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};