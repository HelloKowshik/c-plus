#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    vector<string> tutionList;
    string input;
    ifstream file;
    file.open("tutionList.txt");
    while(file>>input)
    {
        tutionList.push_back(input);
    }
    for(string items : tutionList){
        cout<<items<<"\t";
    }
    return 0;
}
