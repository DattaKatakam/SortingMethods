#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include<iostream>
class BubbleSort{
public:
    BubbleSort(int* arrBubble, int arrSize);
    int arraySize;
    int* bubbleArray;
    void sort();
};

#endif // BUBBLESORT_H
