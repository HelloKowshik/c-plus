#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    string status = "Inactive";
    public:
        string userName;
        string email;
        string getStatus(){
            return status;
        };
        User(){

        }
        User(string userName, string email, string status){
            this->userName = userName;
            this->email = email;
            this->status = status;
        }
        ~User(){
            cout<<"Destructor!"<<endl;
        }

};
int add_unique_user(vector<User> &users, User user){
    for(int i = 0; i < users.size(); i++){
        if(users[i].userName == user.userName || users[i].email == user.email){
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}
int main()
{
    User user1, user2, user3, user4("habibBD","habib@bd.com","Active");
    vector<User> users;
    user1.userName = "john";
    user1.email = "john@doe.com";
    user2.userName = "Kamal";
    user2.email = "kamal@bd.com";
    user3.userName = "Kamal";
    user3.email = "kamala@bd.com";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);
    users.push_back(user4);
    int x = add_unique_user(users, user3);
    cout<<x<<endl;
    for(int i = 0; i < users.size(); i++){
        cout<<users[i].userName<<"\t"<<users[i].email<<"\t"<<users[i].getStatus()<<"\t"<<endl;
    }
    return 0;
}
