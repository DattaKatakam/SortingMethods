#include <iostream>
#include"selectionsort.h"
using namespace std;

int main()
{
    int n = 7;
    int* arr = new int[n];
    int a[7] = {5, 20, 3, 1, 2, 7, 4};
    for(int i =0; i< n; i++){
        arr[i] = a[i];
    }
    SelectionSort* ss = new SelectionSort(arr, n);
    ss->sort();
    return 0;
}
