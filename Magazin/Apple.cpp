#include "Apple.h"
#include <iostream>


Apple::Apple( int price,int quantity, string country) {
	this->price = price;
	this->quantity = quantity;
	this->country = country;
}
string Apple::GetType() {
	return "Apple";
}

int Apple::GetQuantity() {
	return quantity;
}
int Apple::GetPrice() {
	return price;
}
void Apple::Print() {
	cout << "Apple (from=" << country << ") " 
		<<"Price=" << price << " Quantity=" << quantity;
}