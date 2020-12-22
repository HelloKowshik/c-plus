#include<iostream>
using namespace std;
int squre1(int n);
void squre2(int *n);
void squre3(int &n);
int main()
{
    int n1 = 5, n2 = 6, n3 = 7;
    cout<<"Value of n3 Before Square3: "<<n3<<endl;
    cout<<"Address of n3: "<<&n3<<endl;
    squre3(n3);
    cout<<"Value of n3 After Square3: "<<n3<<endl;
    return 0;
}
int squre1(int n)
{
    cout<<"Address of n1 in Square1: "<<&n<<endl;
    n *= n;
    return n;
}
void squre2(int *n)
{
    cout<<"Address of n2 in Square2: "<<&n<<endl;
    *n *= *n;
}
void squre3(int &n)
{
    cout<<"Address of n3 in Square3: "<<&n<<endl;
    n *= n;
}
