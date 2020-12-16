#include <iostream>
using namespace std;
int main()
{
    double arg1,arg2,res;
    char op;
    cout<<"Enter arg1 op arg2: "<<endl;
    cin>>arg1>>op>>arg2;
    switch(op){
        case '+':
           res = arg1 + arg2;
           cout<<arg1<<op<<arg2<<" = "<<res<<endl;
           break;
        case '-':
            res = arg1 - arg2;
            cout<<arg1<<op<<arg2<<" = "<<res<<endl;
            break;
        case '*':
            res = arg1 * arg2;
            cout<<arg1<<op<<arg2<<" = "<<res<<endl;
            break;
        case '/':
            if(arg2!=0){
                res = arg1 / arg2;
                cout<<arg1<<op<<arg2<<" = "<<res<<endl;
            }
            else
                cout<<"Illegal Expression"<<endl;
            break;
        default:
            cout<<"Illegal Expression"<<endl;
    }
    return 0;
}
