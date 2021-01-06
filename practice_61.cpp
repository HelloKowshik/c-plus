#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string fileName, input;
    int totalContact;
    string contactInfo;
    vector<string> contactList;
    cout<<"Enter File Name: ";
    cin>>fileName;
    ofstream file(fileName, ios::app);
    ifstream data("myContact.txt");
    cout<<"\nHow Many Contacts?  ";
    cin>>totalContact;
    for(int i = 0; i <= totalContact; i++){
        getline(cin, contactInfo);
        contactList.push_back(contactInfo);
    }
    for(string contact : contactList){
        file<<contact<<endl;
    }
    while(data>>input){
        contactList.push_back(input);
    }
    for(string co : contactList){
        cout<<co<<endl;
    }
    return 0;
}
