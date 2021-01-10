#include<iostream>
#include<string>

using namespace std;

template <typename T>
void swaping(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swaping(T a[], T b[], int arrSize)
{
    for(int i = 0; i < arrSize; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main()
{
    int a = 11;
    int b = 21;
    int ones[] = {1, 1, 1, 1, 1, 1, 1};
    int nines[] = {9, 9, 9, 9, 9, 9};
    string f_name = "John";
    string l_name = "Doe";
    swaping(a, b);
    cout<<"a: "<<a<<"\tb: "<<b<<endl;
    swaping(f_name, l_name);
    cout<<"First Name: "<<f_name<<"\tLast Name: "<<l_name<<endl;
    for(int i = 0; i < 6; i++){
        cout<<ones[i]<<" "<<nines[i]<<"\t";
    }
    cout<<endl;
    swaping(ones, nines, 6);
    for(int i = 0; i < 6; i++){
        cout<<ones[i]<<" "<<nines[i]<<"\t";
    }
    return 0;
}
