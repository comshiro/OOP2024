
#include <cstring>
#include "Student.h"

int compareByName(const Student& student1, const Student& student2) {
    return strcmp(student1.getName(), student2.getName());
}

int compareByAverage(const Student& student1, const Student& student2) {
    if (student1.getAverageGrade() > student2.getAverageGrade())
        return 1;
    else if (student1.getAverageGrade() < student2.getAverageGrade())
        return -1;
    else
        return 0;
}

int compareByMathGrade(const Student& student1, const Student& student2) {
    if (student1.getMathGrade() > student2.getMathGrade()) {
        return 1;
    }
    else if (student1.getMathGrade() < student2.getMathGrade()) {
        return -1;
    }
    else {
        return 0;
    }
}

int compareByEnglishGrade(const Student& student1, const Student& student2) {
    if (student1.getEnglishGrade() > student2.getEnglishGrade()) {
        return 1;
    }
    else if (student1.getEnglishGrade() < student2.getEnglishGrade()) {
        return -1;
    }
    else {
        return 0;
    }
}

int compareByHistoryGrade(const Student& student1, const Student& student2) {
    if (student1.getHistoryGrade() > student2.getHistoryGrade()) {
        return 1;
    }
    else if (student1.getHistoryGrade() < student2.getHistoryGrade()) {
        return -1;
    }
    else {
        return 0;
    }
}