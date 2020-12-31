#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myList;
    int vectorSize, data;
    cout<<"How Many Element? ";
    cin>>vectorSize;
    for(int i = 0; i < vectorSize; i++)
    {
        cin>>data;
        myList.push_back(data);
    }
    cout<<endl;

    for(int x = 0; x < myList.size(); x ++)
    {
        if(myList[x] % 2 == 0){
            myList.erase(myList.begin() + x);
            x--;
        }
    }
    for(int x = 0; x < myList.size(); x ++){
        cout<<myList[x]<<" ";
    }

    /*for (auto i = myList.begin(); i != myList.end(); ++i) {
        if (*i % 2 == 0) {
            myList.erase(i);
            i--;
        }
    }

    for (auto it = myList.begin(); it != myList.end(); ++it)
        cout<< *it<< ' ';*/

    return 0;
}
