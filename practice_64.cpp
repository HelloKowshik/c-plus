#include<iostream>
#include<string>

using namespace std;

struct Rectangle{
    double length;
    double width;
};
void swap(int &a, int &b);
void swap(string &f_name, int &l_name);

double area(double length, double width){
    return length * width;
}

double area(double length){
    return length * length;
}

double area(Rectangle rect){
    return rect.width * rect.length;
}

double pow(double base, int pow = 3){
    int total = 1;
    for(int i = 0; i < pow; i++){
        total*= base;
    }
    return total;
}

int main()
{
    int a = 11, b = 21;
    string f_name = "John";
    string l_name = "Doe";
    Rectangle rectagle;
    rectagle.length = 12;
    rectagle.width = 12;
    swap(a, b);
    cout<<"a: "<<a<<"\tb: "<<b<<endl;
    swap(f_name, l_name);
    cout<<"First Name: "<<f_name<<"\tLast Name: "<<l_name<<endl;
    cout<<"Area1: "<<area(rectagle.length, rectagle.width)<<endl;
    cout<<"Area2: "<<area(rectagle.length)<<endl;
    cout<<"Area3: "<<area(rectagle)<<endl;
    cout<<"Power: "<<pow(3)<<endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"a: "<<a<<"\tb: "<<b<<endl;
}

void swap(string &f_name, string &l_name)
{
    string temp = f_name;
    f_name = l_name;
    l_name = temp;
}
