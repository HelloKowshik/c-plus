#include<iostream>
#include<string>
using namespace std;
int squareArr(int *arr);
string maxName(string *userName, int arrSize);
int main()
{
    int originalArr[4] = {2, 3, 4, 5};
    int arraySize = 5;
    string names[arraySize] = {"smith", "hazlewood", "starc", "lyon", "cummins"};
    squareArr(originalArr);
    cout<<"Original Arr: ";
    for(int i = 0; i < 4; i++)
        cout<<originalArr[i]<<" ";
    cout<<endl;
    cout<<maxName(names, arraySize)<<endl;
}
int squareArr(int *arr)
{
    int *ptr;
    ptr = arr;
    for(int i = 0; i < 4; i++)
        ptr[i] = ptr[i] * ptr[i];
    cout<<"Square Arr: ";
    for(int i = 0; i < 4; i++)
        cout<<ptr[i]<<" ";
    cout<<endl;
}
string maxName(string *userName, int arraySize)
{
    string maxUserName = userName[0];
    for(int i = 0; i < arraySize; i++)
    {
        if(maxUserName.length() < userName[i].length())
            maxUserName = userName[i];
    }
    return maxUserName;
}
