#include <initializer_list> 

class Sort {
private:
    int* elements;
    int size;

public:
    Sort(int numElements, int minValue, int maxValue);
    Sort(std::initializer_list<int> initList);
    Sort(const int* arr, int numElements);
    Sort(const char* str);
    Sort(const char* str, ...);
   

    ~Sort();

  
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void quickSort(int arr[], int low, int high, bool ascendent);
    void BubbleSort(bool ascendent = false);

    void Print() const;
    int GetElementsCount() const;
    int GetElementFromIndex(int index) const;
};
