#include<iostream>
using namespace std;
class Parent{
    int examId;
protected:
    int studentId;
public:
    void setId(int id){
        examId = id;
    }
};
class Student: public Parent{
public:
    int showId(int id){
        studentId = id;
        return studentId;
    }
    int examInfo(int id){
        Parent::setId(id);
        return id;
    }
};
int main()
{
    Student std1;
    int id, exId;
    cout<<"Enter Your ID: ";
    cin>>id;
    cout<<"Enter Exam ID: ";
    cin>>exId;
    cout<<"Student ID: "<<std1.showId(id)<<endl;
    cout<<"Exam ID: "<<std1.examInfo(exId);
    return 0;
}
