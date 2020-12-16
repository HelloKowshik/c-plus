#include<iostream>
using namespace std;
void resizeArray(int*& arr,int currentSize, int newSize);
int main()
{
    int arraySize = 10;
    int *arr = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
        arr[i] = i * 10;
    int oneMore = 110;
    int newSize = arraySize * 2;
    resizeArray(arr, arraySize, newSize);
    arraySize = newSize;
    arr[arraySize++] = oneMore;
    return 0;
}

void resizeArray(int*& arr,int currentSize, int newSize)
{
    int *temp = new int[newSize];
    for(int i = 0; i < currentSize; i++)
    {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}
