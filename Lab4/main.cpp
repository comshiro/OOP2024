#include <iostream>
#include "Sort.h" 

int main() {
    Sort sort1(10, 1, 100); 
    Sort sort2 = {4, 2, 8, 1, 9};
    int arr[] = {3, 6, 2, 9, 1};
     Sort sort3(arr, 4); 
  // Sort sort4("H","E","l","l","o");
    
    
    std::cout << "Elements before sorting:" << std::endl;
    sort1.Print();
    sort2.Print();
    sort3.Print();
    //sort4.Print();

   sort1.InsertSort();
   sort3.BubbleSort();
   sort2.QuickSort(true); 
   //sort4.BubbleSort(true);

   std::cout << "\nElements after sorting:" << std::endl;
   sort1.Print();
   sort2.Print();
   sort3.Print();
   //sort4.Print();
    
    return 0;
}
