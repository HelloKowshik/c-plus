#include<iostream>
using namespace std;
int findMinIndex(int arr[], int low, int high);
void SelectionSort(int arr[], int arrSize);
int main()
{
    int arrSize = 6;
    //int arr[arrSize] = {8, 5, 7, 8, 13, 4};
    int arr[arrSize] = {19, 2, 20, 1, 0, 18};
    SelectionSort(arr, arrSize);
    for(int i = 0; i < arrSize; i++)
        cout<<arr[i]<<", ";
    return 0;
}
void SelectionSort(int arr[], int arrSize)
{
    int minIndex;
    for(int i = 0; i < arrSize; i++){
        minIndex = findMinIndex(arr, i, arrSize - 1);
        swap(arr[i], arr[minIndex]);
    }
}
int findMinIndex(int arr[], int low, int high)
{
    int minVal, minIndex;
    minVal = arr[low];
    minIndex = low;
    for(int i = low + 1; i <= high; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}
