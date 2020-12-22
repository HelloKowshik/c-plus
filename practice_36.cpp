#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    int sum = 0, totalStudents;
    *ptr = 56;
    cout<<"Before: "<<*ptr<<endl;
    delete ptr;
    cout<<"After: "<<*ptr<<endl;
    cout<<"Total Students: ";
    cin>>totalStudents;
    int *studentsMarks = new int[totalStudents];
    for(int i = 0; i < totalStudents; i++)
        cin>>*(studentsMarks + i);
    for(int i = 0; i < totalStudents; i++)
        sum += *(studentsMarks + i);
    cout<<"Sum = "<<sum<<endl;
    delete[] studentsMarks;
    cout<<"After = "<<*(studentsMarks + 1)<<endl;
    return 0;
}
