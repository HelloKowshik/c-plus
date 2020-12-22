#include<iostream>
using namespace std;
void swapData(int *xp, int *yp);
void printArray(int arr[], int arrSize);
void MergeSort(int arr[], int low, int high);
void Merge(int arr[], int lowLeft, int highLeft, int highRight);
int main()
{
    int arrSize = 8;
    int arr[arrSize] = {14, 5, 8, 10, 13, 1, 18, 3};
    MergeSort(arr, 0, arrSize - 1);
    printArray(arr, arrSize);
    swapData(&arr[1], &arr[2]);
    cout<<endl;
    printArray(arr, arrSize);
    return 0;
}
void swapData(int *xp, int *yp)
{
    //swap(*yp, *xp);
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
        cout<<arr[i]<<", ";
}
void MergeSort(int arr[], int low, int high)
{
    int mid;
    if( low == high)
    {
        return;
    }
    else{
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }

}
void Merge(int arr[], int lowLeft, int highLeft, int highRight)
{
    int lowRight, arrSize, i, iArray;
    lowRight = highLeft + 1;
    arrSize = highRight - lowLeft + 1;
    int *mergedArr = new int[arrSize];
    int rightIndex, leftIndex, resultIndex = 0;
    rightIndex = lowRight;
    leftIndex = lowLeft;
    while((leftIndex <= highLeft) && (rightIndex <= highRight))
    {
        if(arr[leftIndex] < arr[rightIndex]){
            mergedArr[resultIndex] = arr[leftIndex];
            leftIndex++;
            resultIndex++;
        }
        else{
            mergedArr[resultIndex] = arr[rightIndex];
            rightIndex++;
            resultIndex++;
        }
    }
    while(leftIndex <= highLeft){
        mergedArr[resultIndex] = arr[leftIndex];
        leftIndex++;
        resultIndex++;
    }
    while(rightIndex <= highRight){
        mergedArr[resultIndex] = arr[rightIndex];
        rightIndex++;
        resultIndex++;
    }
    for(i = 0, iArray = lowLeft; i<arrSize; i++,iArray++)
        arr[iArray] = mergedArr[i];
    delete []mergedArr;
}
