#include<iostream>
using namespace std;
int main()
{
    char inputChar;
    int asciiVal;
    cout<<"Enter a character"<<endl;
    cin>>inputChar;
    asciiVal = (int)inputChar;
    cout<<"The ASCII Value of " <<inputChar <<" is "<<asciiVal<<endl;
    return 0;
}
