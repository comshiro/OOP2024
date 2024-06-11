#include "ShoppingList.h"
#include <iostream>

void ShoppingList::addItem(Item* i) {
	items.push_back(i);
}
void ShoppingList::printList() {
	for (auto item : items)
		cout << item->getName() << " : " << item->getInfo() << ";";
}