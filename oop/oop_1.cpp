#include<iostream>
#include<string>
using namespace std;

struct User{
    string firstName;
    string lastName;
    string get_status(){
        return status;
    }
    private:
        string status = "Not Active";
};
int main()
{
    User user;
    user.firstName = "Jason";
    user.lastName = " Marnuss";
    string res = user.get_status();
    cout<<res<<endl;
    return 0;
}
