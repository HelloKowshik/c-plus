#include<iostream>
#include<vector>
using namespace std;
void print_vector(vector<int> &item);
int main()
{
    vector<int> items = {2011, 2015, 2019};
    items.push_back(2023);
    items.push_back(2027);
    print_vector(items);
    return 0;
}
void print_vector(vector<int> &item)
{
    for(int i = 0; i < item.size(); i++)
        cout<<item[i]<<"\t";
}
