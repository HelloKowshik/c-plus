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
int main()
{
    User user, user1, user2;
    user.set_status("Gold");
    cout<<user.getStatus()<<endl;
    cout<<User::get_count()<<endl;
    return 0;
}
