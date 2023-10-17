#include"insertionsort.h"

InsertionSort::InsertionSort(int *mainArray, int arraySize){
    arrSize = arraySize;
    arrInsertion = new int[arrSize];
    for(int i = 0; i< arrSize; i++){
        arrInsertion[i] = mainArray[i];
    }
}

void InsertionSort::sort(){
    std::cout << "array is unsorted : " << std::endl;
    for( int i = 0; i < arrSize; i++){
        std::cout << arrInsertion[i] << ", ";
    }std::cout << std::endl;
    for(int i = 0; i< arrSize; i++){
        int j = i-1;
        while(j>=0){
            if(arrInsertion[j] > arrInsertion[j+1]){
                int temp = arrInsertion[j];
                arrInsertion[j] = arrInsertion[j+1];
                arrInsertion[j+1] = temp;
            }
            j--;
        }
    }
    std::cout << "array is sorted : " << std::endl;
    for( int i = 0; i < arrSize; i++){
        std::cout << arrInsertion[i] << ", ";
    }std::cout << std::endl;
}
