#include<iostream>
using namespace std;
double avgoflst(int lst[], int arraySize);
int main()
{
    int s,i,ele;
    double avg;
    cout<<"Enter Array size: "<<endl;
    cin>>s;
    int arr[s];
    for(i = 0; i < s; i++)
    {
        cin>>ele;
        arr[i] = ele;
    }
    avg = avgoflst(arr, s);
    cout<<"Average = "<<avg;
    return 0;
}
double avgoflst(int lst[], int arraySize)
{
    double avg = 0;
    int sum = 0;
    for(int i = 0; i < arraySize; i++)
    {
        sum += lst[i];
    }
    avg = (double)sum / (double)arraySize;
    return avg;
}
