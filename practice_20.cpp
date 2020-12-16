#include<iostream>
using namespace std;
const int MAX_SIZE = 60;
int main()
{
    int numOfStudents,sum = 0,index,currentGrade,gradeList[MAX_SIZE];
    double avg = 0;
    cout<<" Enter total number Of Students:"<<endl;
    cin>>numOfStudents;
    for(index = 0; index < numOfStudents; index++)
    {
        cin>>currentGrade;
        gradeList[index] = currentGrade;
    }
    for(int index = 0; index < numOfStudents; index++)
    {
        sum += gradeList[index];
    }
    avg = (double)sum / (double)numOfStudents;
    cout<<"Average: "<<avg<<endl;
    cout<<"The grades above the Average: ";
    for(index = 0; index < numOfStudents; index++)
    {
        if(gradeList[index] > avg)
        {
            cout<< gradeList[index]<<" ";
        }
    }
    return 0;
}
