#include "Database.h"
#include<string>
#include "Entry.h"
#include<vector>
#include<iostream>
using namespace std;


Database& Database::operator+=(Entry* e) {
	entries.push_back(e);
	return *this;
}
void Database::operator-=(string name) {
	vector<Entry*>::iterator it;
	for(it=entries.begin(); it!=entries.end();it++)
		if ((*it)->GetName() == name)
		{
			entries.erase(it);
			it = entries.begin();
		}
}
vector<Entry*>::iterator Database::begin() {
	return entries.begin();
}
vector<Entry*>::iterator Database::end() {
	return entries.end();
}
void Database::Print() {
	for (auto e : entries)
		e->Print();
	cout << endl;
}