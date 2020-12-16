#include<iostream>
using namespace std;
void swap(int &a, int &b);

int main()
{
    int a = 5, b = 7;
    cout<<"Before Swap a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After Swap a = "<<a<<" b = "<<b<<endl;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
