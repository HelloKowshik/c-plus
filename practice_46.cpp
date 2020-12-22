#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;
    string profession;
};
int main()
{
    Person p1{"Kowshikur Rahman", 29, "Software Engineer"};
    Person p2;
    Person p3;
    cout<<"Enter Name, Age, Profession"<<endl;
    getline(cin,p3.name);
    cin>>p3.age;
    getline(cin,p3.profession);
    cout<<endl;
    p2.name = "John Doe";
    p2.age = 30;
    p2.profession = "Web Developer";
    cout<<p1.name<<" - "<<p1.age<<" - "<<p1.profession<<endl;
    cout<<p2.name<<" - "<<p2.age<<" - "<<p2.profession<<endl;
    cout<<p3.name<<" - "<<p3.age<<" - "<<p3.profession<<endl;
    return 0;
}
