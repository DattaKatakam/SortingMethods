#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include<iostream>
class SelectionSort{
public:
    int* mainArray;
    int arraySize;
    int* sortedArray;
    SelectionSort(int* arrayMain, int sizeArray);
    int* sort();

};

#endif // SELECTIONSORT_H
