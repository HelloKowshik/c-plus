#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour24,minute24,hour12,minute12;
    char temp;
    string period;
    cout<<"Enter 24 hour period time: "<<endl;
    cin>>hour24>>temp>>minute24;
    minute12 = minute24;
    if(hour24 >= 0 && hour24 <= 11)
    {
        period = "am";
        if(hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;
    }
    else
    {
        period = "pm";
        if(hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 - 12;
    }
    cout<<hour24<<":"<<minute24<<" is "<<hour12<<":"<<minute12<<" "<<period<<endl;
    return 0;
}
