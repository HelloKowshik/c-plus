#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,even = 0,odd = 0;
    cout<<"Please enter 4 positive integers, separated by a space:"<<endl;
    cin>>n1>>n2>>n3>>n4;
    if(n1%2 == 0)
        even++;
    else
        odd++;
    if(n2%2 == 0)
        even++;
    else
        odd++;
    if(n3%2 == 0)
        even++;
    else
        odd++;
    if(n4%2 == 0)
        even++;
    else
        odd++;
    if(even > odd){
        cout<<"more evens"<<endl;
    }
    else if(even < odd){
        cout<<"more odds"<<endl;
    }
    else
        cout<<"same number of evens and odds"<<endl;
    return 0;
}
