#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    int totalStudent;
    vector<string> tutionList;
    string data;
    ofstream file;
    file.open("tutionList.txt", ios::app);
    cout<<"How Many Students? ";
    cin>>totalStudent;
    for(int i = 0; i < totalStudent; i++)
    {
        cin>>data;
        tutionList.push_back(data);
    }
    for(string tu : tutionList)
        file<<tu<<endl;
    return 0;
}
