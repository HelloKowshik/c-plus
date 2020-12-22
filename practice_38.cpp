#include<iostream>
using namespace std;
int factorial(int n);
bool isAllEven(int arr[], int length);
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    int arr[4] = {2, 4, 12, 10};
    cout<<isAllEven(arr, 4);
    return 0;
}
bool isAllEven(int arr[], int length)
{
    int total;
    if(length == 1)
    {
        return (arr[0]%2 == 0);
    }
    else{
        total = isAllEven(arr, length - 1);
        if(total == true)
        {
            return (arr[length-1]%2 == 0);
        }
        else{
            return false;
        }
    }
}
int factorial(int n)
{
    int fact = 1;
    if(n == 1)
        return 1;
    else{
        fact = factorial(n - 1);
        fact *= n;
    }
    return fact;
}
