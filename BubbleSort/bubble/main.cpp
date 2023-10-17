#include <iostream>
#include"bubblesort.h"
using namespace std;

int main()
{
    int n = 7;
    int arrArr[7] = {10, 20, 15, 8, 1, 9, 2};
    int* arr = new int[n];
    for(int i = 0; i< n; i++){
        arr[i] = arrArr[i];
    }
    BubbleSort* bs = new BubbleSort(arr, n);
    bs->sort();
    cout << "Hello World!" << endl;
    return 0;
}
