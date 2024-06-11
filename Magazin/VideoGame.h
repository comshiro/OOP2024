#pragma once
#include "Article.h"
#include <string>
using namespace std;


class VideoGame :public Article
{
	int price;
	int quantity;
	string platform;
	string name;
public:
	VideoGame(int price, int quantity, string platform, string name);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

