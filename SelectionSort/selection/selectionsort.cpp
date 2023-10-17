#include"selectionsort.h"
#include<limits>
SelectionSort::SelectionSort(int *arrayMain, int sizeArray){
    arraySize = sizeArray;
    mainArray = new int[arraySize];
    for(int i = 0; i < arraySize; i++){
        mainArray[i] = arrayMain[i];
    }
    sortedArray = new int[arraySize];
}

int* SelectionSort::sort(){
    std::cout << "original array is below: " << std::endl;
    for(int i = 0; i<arraySize; i++){
        std::cout << mainArray[i] << " , ";
    }std::cout << std::endl;
    for(int i = 0; i < arraySize; i++){
        int j = 0;
        int min = 10000;
        while(j < arraySize){
            if(mainArray[j] < min && i == 0){
                min = mainArray[j];
            }
            else if(mainArray[j] < min && sortedArray[i-1] < mainArray[j]){
                min = mainArray[j];
            }
            j++;
        }
        sortedArray[i] = min;
    }
    std::cout << "sorted array is below: " << std::endl;
    for(int i = 0; i<arraySize; i++){
        std::cout << sortedArray[i] << " , ";
    }
}
