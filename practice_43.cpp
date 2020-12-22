#include<iostream>
using namespace std;
int linear_search(int search_value, int lst[], int elements);
int main()
{
    int arr[] = {19, 2, 20, 1, 0, 18};
    cout<<linear_search(18, arr, 6);
    return 0;
}
int linear_search(int search_value, int lst[], int elements)
{
    int totalCount = 0;
    for(int i = 0; i < elements; i++)
    {
        if(search_value == lst[i]){
            totalCount++;
            break;
        }
        else{
            totalCount++;
        }

    }
    return totalCount;
}
