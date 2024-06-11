#include <iostream>
#include "Shop.h"
#include "Book.h"
#include "Apple.h"
#include "VideoGame.h"
#include <string>
using namespace std;

int main() {

	Shop s;
	s.Add(new Book(100, 3, "Dune", "Frank Herbert")).Add(new Apple(20, 100, "Romania"));
	s.Add(new VideoGame(10, 2, "Nintendo", "Super Mario"));
	s.Add(new Apple(12, 15, "Germany"));
	cout << "Total Price: " << s.GetTotalPrice() << endl;
	cout << "Apple quuantity: " << s.GetQuantity("Apple") << endl;
	cout << "Items:" << endl;
	s.List();
	return 0;
}