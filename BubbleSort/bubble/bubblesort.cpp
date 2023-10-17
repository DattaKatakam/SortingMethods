#include"bubblesort.h"
using namespace std;

BubbleSort::BubbleSort(int *arrBubble, int arrSize){
    arraySize = arrSize;
    bubbleArray = new int[arraySize];
    for(int i = 0; i< arraySize; i++){
        bubbleArray[i] = arrBubble[i];
    }
}

void BubbleSort::sort(){
    cout << " UnSorted array " << endl;
    for(int i = 0; i< arraySize ; i++){
        cout << bubbleArray[i] << ", ";
    }
    cout << endl;
    for(int i = 0; i < arraySize; i++){
        int j = 0;
        while( j < arraySize-i){
            if(bubbleArray[j] < bubbleArray[j-1] && j-1>=0 ){
                int temp = bubbleArray[j];
                bubbleArray[j] = bubbleArray[j-1];
                bubbleArray[j-1] = temp;
            }
            j++;
        }
    }
    cout << " sorted array " << endl;
    for(int i = 0; i< arraySize ; i++){
        cout << bubbleArray[i] << ", ";
    }
    cout << endl;

}
