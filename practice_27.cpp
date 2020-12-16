#include<iostream>
#include<string>
using namespace std;
string RemainingWords(string word);
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<RemainingWords(s)<<endl;
    return 0;
}
string RemainingWords(string word)
{
    int i;
    int len = word.length();
    int firstSpace = 0;
    string remainingWords;
    for(i = 0; i < len; i++)
    {
        if(word[i] == ' ')
        {
            firstSpace = i;
            break;
        }
    }
    remainingWords = word.substr(firstSpace + 1);
    return remainingWords;
}
