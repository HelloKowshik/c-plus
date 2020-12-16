#include<iostream>
#include<string>
using namespace std;
int maxinlst(int arr[], int sizeOfArr);
int main()
{
    int s,currentInput;
    cout<<"Enter the number of total Elements:"<<endl;
    cin>>s;
    int arr[s];
    for(int i = 0; i < s; i++)
    {
        cin>>currentInput;
        arr[i] = currentInput;
    }
    cout<<"Largest Absolute value: "<<abs(maxinlst(arr, s))<<endl;
    return 0;
}

int maxinlst(int arr[], int sizeOfArr)
{
    int maxVal = arr[0];
    for(int i = 0; i < sizeOfArr; i++)
    {
        if(arr[i] < maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
