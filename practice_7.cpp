#include <iostream>

using namespace std;

int main()
{
    char userCh;
    cout<<"Enter Character: "<<endl;
    cin>>userCh;
    if(userCh >= 'A' && userCh <= 'Z')
        cout<<userCh<<" is UpperCase"<<endl;
    else if(userCh >= 'a' && userCh <= 'z')
        cout<<userCh<<" is LowerCase"<<endl;
    else if(userCh >= '0' && userCh<= '9')
        cout<<userCh<<" is Digit"<<endl;
    else
        cout<<userCh<<" is not alpha-numeric"<<endl;
    return 0;
}
