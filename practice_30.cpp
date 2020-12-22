#include<iostream>
using namespace std;
const int MAX = 4;
int main()
{
    int normalArr[MAX] = {3500, 3000, 6000, 4000};
    int* pointerArr[MAX];
    cout<<"Normal Arr: ";
    for(int i = 0; i < MAX; i++)
        cout<<normalArr[i]<<" ";
    cout<<endl;

    for(int i = 0; i < MAX; i++)
        pointerArr[i] = &normalArr[i];

    cout<<"Pointer Arr: ";

    for(int i = 0; i < MAX; i++)
        cout<<*pointerArr[i]<<" ";
    return 0;
}
