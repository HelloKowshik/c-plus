#include<iostream>
#include<string>
using namespace std;
int main()
{
    string userInput;
    int middleLength;
    cout<<"Enter an odd length string: ";
    getline(cin,userInput);
    middleLength = (userInput.length()) / 2;
    cout<<"Middle Character: "<<userInput[middleLength]<<endl;
    cout<<"First Half: "<<userInput.substr(0, middleLength)<<endl;
    cout<<"Second half: "<<userInput.substr(middleLength + 1)<<endl;
    return 0;
}
