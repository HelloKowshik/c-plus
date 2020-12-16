#include<iostream>
#include<string>
using namespace std;
int main()
{
    string userInput;
    cout<<"Enter a character: ";
    cin>>userInput;
    if(userInput >= "a" && userInput <= "z")
        cout<<userInput<<" is Lower Case Letter."<<endl;
    else if(userInput >= "A" && userInput <= "Z")
        cout<<userInput<<" is Capital Letter."<<endl;
    else if(userInput >= "0" && userInput <= "9")
        cout<<userInput<<" is digit."<<endl;
    else
        cout<<userInput<<" is non alpha-numeric character."<<endl;
    return 0;
}
