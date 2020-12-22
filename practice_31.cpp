#include<iostream>
using namespace std;
double getAverage(int *arr, int arraySize);
int main()
{
    int arrSize = 6;
    int arr[arrSize] = {10, 20, 30, 40, 55, 10};
    double avg = getAverage(arr, arrSize);
    cout<<"Average = "<<avg<<endl;
    return 0;
}
double getAverage(int *arr, int arraySize)
{
    double average = 0;
    int sum = 0;
    for(int i = 0; i < arraySize; i++)
        sum += arr[i];
    average = (double)sum / arraySize;
    return average;
}
