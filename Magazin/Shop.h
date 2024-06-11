#include <iostream>
#include "Book.h"
#include "Apple.h"
#include "VideoGame.h"
#include <string>
#include <vector>
using namespace std;
class Shop
{
	vector<Article*>items;

public:
	Shop& Add(Article*);
	int GetTotalPrice();
	int GetQuantity(string type);
	void List();
};

