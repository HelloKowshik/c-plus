#include<iostream>
using namespace std;
int main()
{
    int numOfStudents,counting,curr,sum = 0;
    double avg;
    cout<<"Enter Number Of Students:"<<endl;
    cin>>numOfStudents;
    for(counting = 0; counting < numOfStudents; counting++)
    {
        cin>>curr;
        sum += curr;
    }
    avg = (double)sum / (double)numOfStudents;
    cout<<"Average = "<<avg;
    return 0;
}
