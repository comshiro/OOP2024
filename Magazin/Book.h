#pragma once
#include "Article.h"
#include <string>
using namespace std;


class Book :public Article
{
	int price;
	int quantity;
	string title;
	string author;
public:
	Book(int price, int quantity, string title, string author);
	  string GetType() ;
	  int GetQuantity() ;
	  int GetPrice() ;
	  void Print() ;
};

