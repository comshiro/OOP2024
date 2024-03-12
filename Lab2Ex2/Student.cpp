#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

void Student::setName(const string& s) {
	strncpy(name, s.c_str(), sizeof(name) - 1);
	name[sizeof(name) - 1] = '\0';
}
string Student::getName() {
	return name;
}
void Student::setMathGrade(float value) {
	mathGrade = value;
}
void Student::setEnglishGrade(float value) {
	englishGrade = value;
}
void Student::setHistoryGrade(float value) {
	if (value > 1 && value < 10)
		mathGrade = value;
	else
		cout << "Invalid grade";
}
float Student::getMathGrade() {
	if (value > 1 && value < 10)
		historyGrade = value;

}
float Student::getEnglishGrade() {
	if (value > 1 && value < 10)
		return englishGrade;
	else
		cout << "Invalid grade";
}
float Student::getHistoryGrade() {
	if (value > 1 && value < 10)
		return historyGrade;
	else
		cout << "Invalid grade";
}
float Student::getAverageGrade() {
	return (mathGrade + englishGrade + historyGrade) / 3;
}