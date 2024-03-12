#include <iostream>
#include <cstring>
using namespace std; 

class Student
{
    char name[100];
    float mathGrade, englishGrade, historyGrade;
public:
    void setName(const string& s);
    string getName();
    void setMathGrade(float value);
    void setEnglishGrade(float value);
    void setHistoryGrade(float value);
    float getMathGrade();
    float getEnglishGrade();
    float getHistoryGrade();
    float getAverageGrade();
};
