#include<iostream>
#include<array>
using namespace std;
void print_array(array<int, 20> data,int arr_size);

int main()
{
    array<int, 20> stlArr = {11, 23, 32, 23, 12, 56, 78};
    print_array(stlArr,7);
    return 0;
}
void print_array(array<int, 20> data,int arr_size)
{
    for(int i = 0; i < arr_size; i++)
        cout<<data[i]<<"\t";
}
