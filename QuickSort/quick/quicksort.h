#ifndef QUICKSORT_H
#define QUICKSORT_H
#include<iostream>
class QuickSort{
public:
    QuickSort(int* arrQuick, int arraySize);
    int* quickArr;
    int arrSize;
    void sort();
    void printSortedArray();
private:
    void startSort(int p, int r);
    int deepSort(int src, int end);
};

#endif // QUICKSORT_H
