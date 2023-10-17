#include <iostream>
#include"insertionsort.h"
using namespace std;

int main()
{
    int n = 7;
    int arrArr[n] = {10, 20, 15, 1, 7, 5, 8};

    InsertionSort* isort = new InsertionSort(arrArr, n);
    isort->sort();
    return 0;
}
