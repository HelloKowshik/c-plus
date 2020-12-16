#include<iostream>
using namespace std;
int main()
{
    char num;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    cout<<num <<endl;
    if(num >= 'a' && num <= 'z'){
        cout<<num<<" is LowerCase"<<endl;
    }
    else if(num >='A' && num <='Z'){
     cout<<num<<" is UpperCase"<<endl;
    }
    else if(num >='0' && num <='9'){
     cout<<num<<" is Number"<<endl;
    }
    else{
        cout<<num<<" is Invalid"<<endl;
    }
    return 0;
}
