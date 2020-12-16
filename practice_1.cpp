#include<iostream>
using namespace std;
int main()
{
    int days,weeks,remainingDays;
    cout<<"How Many Days You Traveled?"<<endl;
    cin>>days;
    weeks = days / 7;
    remainingDays = days % 7;
    cout<<"Weeks: "<<weeks<<" Days: "<<remainingDays<<endl;
    return 0;
}
