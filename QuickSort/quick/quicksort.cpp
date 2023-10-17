#include"quicksort.h"

using namespace std;

QuickSort::QuickSort(int *arrQuick, int arraySize){
    arrSize = arraySize;
    quickArr = new int[arrSize];
    for(int i = 0; i< arrSize; i++){
        quickArr[i] = arrQuick[i];
    }
}

void QuickSort::sort(){
    cout<< " Unsorted array "<< endl;
    for(int i = 0; i< arrSize; i++){
        cout << quickArr[i] << ", ";
    }cout << endl;
    startSort(0, arrSize-1);
}

void QuickSort::startSort(int p, int r){
    if(p < r){
        int q = deepSort(p , r);
        startSort(p, q-1);
        startSort(q+1, r);
    }
}

int QuickSort::deepSort(int src, int endVal){
    int p = quickArr[src];
    int start = src;
    int last = endVal;
    while(start < last){
        while(quickArr[start] <= p){
            start++;
        }
        while(quickArr[last] > p){
            last--;
        }
        if(start < last){
            int temp = quickArr[start];
            quickArr[start] = quickArr[last];
            quickArr[last] = temp;
        }
    }

    int tempSwap = quickArr[src];
    quickArr[src] = quickArr[last];
    quickArr[last] = tempSwap;
    return last;
}

void QuickSort::printSortedArray(){
    cout<< " sorted array "<< endl;
    for(int i = 0; i< arrSize; i++){
        cout << quickArr[i] << ", ";
    }cout << endl;
}
