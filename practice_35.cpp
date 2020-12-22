#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"How many students: ";
    cin>>length;
    int *marks = new int[length];
    for(int i = 0; i < length; i++)
        cin>>*(marks + i);
    cout<<"Marks Obtained: ";
    for(int i = 0; i < length; i++)
        cout<<*(marks + i)<<" ";
    return 0;
}
