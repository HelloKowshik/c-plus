#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    static int userCount;
    string status = "Bronze";
    public:
        string userName;
        string email;
        string getStatus(){
            return status;
        };
        static int get_count(){
            return userCount;
        }
        void set_status(string status){
            if(status == "Gold" || status == "Silver"){
                this->status = status;
            }
            else{
                this->status = "No Status";
            }
        }
        User(){
            userCount++;
        }
        User(string userName, string email, string status){
            this->userName = userName;
            this->email = email;
            this->status = status;
            userCount++;
        }
        ~User(){
            userCount--;
        }

};
int User::userCount = 0;
ostream& operator <<(ostream& output, User user)
{
    output<<"User Name: "<<user.userName<<"\t Email: "<<user.email<<"\n";
    return output;
}
istream& operator >>(istream& input, User &user)
{
    input>>user.userName>>user.email;
    return input;
}
int main()
{
    User user;
    //user.userName = "Hello";
    //user.email = "he@llo.com";
    user.set_status("Gold");
    cin>>user;
    cout<<user<<endl;
    return 0;
}
