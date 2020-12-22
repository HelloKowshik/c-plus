#include<iostream>
using namespace std;
int LinearSearch(int arr[], int arraySize, int searchValue);
int main()
{
    int arrSize, val;
    cout<<"Array Size: ";
    cin>>arrSize;
    int arr[arrSize];
    for(int i = 0; i < arrSize; i++)
        cin>>arr[i];
    /* for(int i = 0; i < arrSize; i++)
        cout<<arr[i]<<" ";
        */
    cout<<"Enter Search Value: ";
    cin>>val;
    cout<<endl;
    cout<<"Result: "<<LinearSearch(arr, arrSize, val)<<endl;
    return 0;
}
int LinearSearch(int arr[], int arraySize, int searchValue)
{
    int i = 0;
    while(i < arraySize)
    {
        if(searchValue == arr[i]){
            return i;
        }
        i++;
    }
    return -1;
}
