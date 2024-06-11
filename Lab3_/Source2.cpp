#include<iostream>
using namespace std;

class B {
	int x;
	char arr[100];

public:
	B(int a, char* b);
	int print();
	B(const B& object);
};

class A {
private:
	int  aa, bb;
	A(int a, int b);
	static A* instance;
public:
	int sum();
	static A* getInstance(int  a = 0, int b = 0);
	static void freeInstance();


};

A* A::instance = 0;


int A::sum()
{
	return aa + bb;

}

A::A(int a, int b) : aa(a),bb(b){}

A* A::getInstance(int  a = 0, int b = 0)
{
	if (instance == NULL)
		instance = new A(a, b);
	else
		return instance;
}

void A::freeInstance()
{
	if (instance != NULL)
		delete instance;
	instance = NULL;
}
int main()
{
	int rez = A::getInstance(3,5)->sum();
	cout << rez;
	int rez2 = A::getInstance()->sum(); 
	A::freeInstance();
	


	B b1(4,"abcf");
	B b2(2,"fsdf");
	B b3 = b1;
	B b4(b2);
	return 0;
}