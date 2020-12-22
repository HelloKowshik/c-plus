#include<iostream>
using namespace std;
int SortedSearch(int sortedArr[], int sortedArrSize, int searchValue);
int main()
{
    int arrSize = 7;
    int sortedArr[arrSize] = {12, 15, 17, 23, 27, 33, 37};
    cout<<SortedSearch(sortedArr, arrSize, 33)<<endl;
    return 0;
}
int SortedSearch(int sortedArr[], int sortedArrSize, int searchValue)
{
    int start = 0, ending = sortedArrSize - 1, mid, index;
    bool found = false;
    while((found == false) && (start <= ending))
    {
        mid = (start + ending) / 2;
        if(searchValue == sortedArr[mid]){
            index = mid;
            found = true;
        }
        else if( searchValue < sortedArr[mid])
            ending = mid - 1;
        else
            start = mid + 1;
    }
    if(found){
        return index;
    }else{
        return -1;
    }
}
