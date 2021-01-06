#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> data){
    for(int val : data){
        cout<<val<<"\t";
    }
}
int main()
{
    vector<int> data = {37, 39, 43, 41, 56};
    print_vector(data);
    cout<<endl;
    return 0;
}
