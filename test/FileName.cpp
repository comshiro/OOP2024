#include<iostream>
using namespace std;
int main() {
	int x = 4; cout << x << endl;
	int* px = &x; cout << px << endl;
	cout << *px << endl;
	//int y = px; cout << y << endl;;
	int y = *px; cout << y;

}