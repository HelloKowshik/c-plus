#include<iostream>
#include<string>
using namespace std;
bool is_palindrome(const string &str, int start, int end);
int main()
{
    string str;
    cout<<"Enter: ";
    cin>>str;
    cout<<is_palindrome(str, 0, str.length() - 1);
    return 0;
}
bool is_palindrome(const string &str, int start, int end)
{
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return is_palindrome(str, ++start, --end);
}
