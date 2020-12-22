#include<iostream>
using namespace std;
void printAsc(int start, int stop);
int main()
{
    int start,stop;
    cout<<"Enter Start AND Stop value: ";
    cin>>start>>stop;
    printAsc(start, stop);
    return 0;
}
void printAsc(int start, int stop)
{
    if(start == stop)
        cout<<start<<endl;
    else
    {
        cout<<start<<endl;
        printAsc(start + 1, stop);
    }
}
