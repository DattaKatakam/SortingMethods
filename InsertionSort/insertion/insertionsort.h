#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include<iostream>
class InsertionSort{
public:
    InsertionSort(int* mainArray, int arraySize);
    int* arrInsertion;
    int arrSize;
    void sort();
};

#endif // INSERTIONSORT_H
