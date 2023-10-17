#include <iostream>
#include"quicksort.h"
using namespace std;

int main()
{
    int n = 7;
    int arrArr[n] = {10, 20, 15, 8, 1, 9, 2};
    int* arr = new int[n];
    for(int i = 0; i< n; i++){
        arr[i] = arrArr[i];
    }
    QuickSort* qs = new QuickSort(arr, n);
    qs->sort();
    qs->printSortedArray();
    return 0;
}
