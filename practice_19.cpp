#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
    int num;
    cout<<"Enter an Integer:"<<endl;
    cin>>num;
    bool res = isPrime(num);
    (res == true) ? cout<<num<<" is Prime"<<endl : cout<<num<<" is NOT Prime"<<endl;
    return 0;
}
bool isPrime(int num)
{
    int i, counter = 0;
    for(i = 1; i<=num; i++)
    {
        if(num % i ==0)
        {
            counter++;
        }
    }
    if(counter <= 2)
    {
        return true;
    }
    else{
        return false;
    }
}
