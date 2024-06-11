#pragma once
#include "Item.h"
#include <vector>

class ShoppingList
{
	vector<Item*>items;

public:
	void addItem(Item*);
	void printList();
};

