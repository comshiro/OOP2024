#include "Shop.h"
#include <string>
#include <vector>
using namespace std;

Shop& Shop::Add(Article* item) {
	items.push_back(item);
	return *this;
}
int Shop::GetTotalPrice() {
	int sum = 0;
	for (auto item : items)
		sum += item->GetPrice() * item->GetQuantity();
	return sum;
}
int Shop::GetQuantity(string type) {
	int sum = 0;
	for (auto item : items)
		if (item->GetType() == type)
			sum += item->GetQuantity();
	return sum;
}
void Shop::List() {
	for (auto item : items) {
		item->Print();
		cout << endl;
	}
}