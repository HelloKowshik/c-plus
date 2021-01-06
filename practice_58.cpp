#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> teamList = {"South Africa", "Bangladesh", "Pakistan", "Westindies"};
    string fileName;
    cin>>fileName;
    ofstream file;
    file.open(fileName, ios::app);
    file<<"Welcome to File System\n";
    for(string team : teamList)
    {
        file<<team<<endl;
    }
    file.close();
    return 0;
}
