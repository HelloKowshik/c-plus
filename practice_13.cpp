#include<iostream>
using namespace std;
int main()
{
    int num,i = 0;
    cout<<"Please enter a positive integer:"<<endl;
    cin>>num;
    while(num>0)
    {
        i = i + 2;
        cout<<i<<endl;
        num--;
    }
}
