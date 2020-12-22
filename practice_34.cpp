#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    double *arr = new double[x];
    for(int i = 1; i <= x; i++)
        arr[i] = (double)i / 3;
    cout<<"[";
    for(int i = 1; i <= x; i++)
        cout<<arr[i]<<" ";
    cout<<"]";
    cout<<endl;
    double *ptr = arr + 1;
    cout<<*ptr<<endl;
    return 0;
}
