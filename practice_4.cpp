#include<iostream>
using namespace std;
int main()
{
    char lowerCaseChar,upperCaseChar;
    int offset;
    cout<<"Enter a lower Case Letter"<<endl;
    cin>>lowerCaseChar;
    offset = (int)(lowerCaseChar - 'a');
    upperCaseChar = (char)('A' + offset);
    cout<<"Uppercase of "<<lowerCaseChar<<" is "<<upperCaseChar<<endl;
    return 0;
}
