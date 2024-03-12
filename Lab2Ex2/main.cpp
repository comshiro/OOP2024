#include "Student.h"
#include <iostream>

int main()
{
    Student student1;
    student1.SetName("Ana");
    student1.SetMathGrade(6.5);
    student1.SetEnglishGrade(3.5);
    student1.SetHistoryGrade(9.5);
    cout << student1.getName() << endl;

    Student student2;
    student2.SetName("Andrei");
    student2.SetMathGrade(8.5);
    student2.SetEnglishGrade(6.4);
    student2.SetHistoryGrade(4.7);
    cout << student2.getName() << endl;

    cout << "name comparison: "<<compareByName(student1, student2) << endl;
    cout<< "average comparison: "<<compareByAverage(student1, student2);
    cout << "math comparison: " << compareByMathGrade(student1, student2);
    cout << "english comparison: " << compareByEnglishGrade(student1, student2);
    cout << "history comparison: " << compareByHistoryGrade(student1, student2);

    return 0;
}