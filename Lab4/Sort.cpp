#include "Sort.h"
#include <initializer_list> 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>


Sort::Sort(int numElements, int minValue, int maxValue) {
    size = numElements;
    elements = new int[size];
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        elements[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
}

Sort::Sort(std::initializer_list<int> initList) {
    size = initList.size();
    elements = new int[size];
    int i = 0;
    for (int value : initList) {
        elements[i++] = value;
    }
}



Sort::Sort(const int* arr, int numElements) {
    size = numElements;
    elements = new int[size];
    for (int i = 0; i < size; ++i) {
        elements[i] = arr[i];
    }
}

Sort::Sort(const char* str) {
    size = strlen(str);
    elements = new int[size];
    for (int i = 0; i < size; ++i) {
        elements[i] = str[i];
    }
}

Sort::Sort(const char* str, ...) {
    va_list args;
    va_start(args, str);

    size = 0;
    const char* current = str;
    while (*current != '\0') {
        size++;
        current = va_arg(args, const char*);
    }

    elements = new int[size];

    va_end(args);
    va_start(args, str);

    current = str;
    for (int i = 0; i < size; ++i) {
        elements[i] = atoi(current);
        current = va_arg(args, const char*);
    }

    va_end(args);
}



Sort::~Sort() {
    delete[] elements;
}

void Sort::InsertSort(bool ascendent) {
    for (int i = 1; i < GetElementsCount(); ++i) {
        int key = GetElementFromIndex(i);
        int j = i - 1;

        if (ascendent) {
            while (j >= 0 && GetElementFromIndex(j) > key) {
                elements[j + 1] = elements[j];
                --j;
            }
        }
        else {
            while (j >= 0 && GetElementFromIndex(j) < key) {
                elements[j + 1] = elements[j];
                --j;
            }
        }

        elements[j + 1] = key;
    }
}


void Sort::QuickSort(bool ascendent) {
    quickSort(elements, 0, size - 1, ascendent);
}

void Sort::quickSort(int arr[], int low, int high, bool ascendent) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; ++j) {
            if ((ascendent && arr[j] < pivot) || (!ascendent && arr[j] > pivot)) {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);

        quickSort(arr, low, i, ascendent);     
        quickSort(arr, i + 1, high, ascendent); 
    }
}



void Sort::BubbleSort(bool ascendent) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < GetElementsCount() - 1; ++i) {
            if ((ascendent && GetElementFromIndex(i) > GetElementFromIndex(i + 1)) || (!ascendent && GetElementFromIndex(i) < GetElementFromIndex(i + 1))) {
                std::swap(elements[i], elements[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}


void Sort::Print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount() const {
    return size;
}

int Sort::GetElementFromIndex(int index) const {
    if (index >= 0 && index < size) {
        return elements[index];
    }
    return -1; 
}