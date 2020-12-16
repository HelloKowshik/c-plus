#include<iostream>
#include<string>
using namespace std;
int main()
{
    string userName;
    int i;
    cout<<"Enter Your Full Name: "<<endl;
    getline(cin, userName);
    for(i = userName.length() - 1; i >= 0; i--)
    {
        cout<<userName[i];
    }
    return 0;
}
