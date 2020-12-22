#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
    int num1 , num2;
    cout<<"Enter Two integers: ";
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" AND "<<num2<<" is "<<gcd(num1, num2)<<endl;
    return 0;
}
int gcd(int x, int y)
{
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);
}
