#include<iostream>
void printData(int data){
    std::cout<<"Data: "<<data<<std::endl;
    std::cout<<"Size: "<<sizeof(data)<<" byte(s)"<<std::endl;
}
void factorail(int num){
    int i, fact = 1;
    for(i = num; i >= 1; i--)
        fact = fact * i;
    std::cout<<"Factorial of "<<num<<" is "<<fact;
}

int main()
{
    std::string password = "hello@123", userPassword;
    int totalCount = 0;
    do{
        std::cout<<"Guess Password: ";
        std::cin>>userPassword;
        totalCount++;
        if(userPassword == password){
            std::cout<<"Password Correct!"<<std::endl;
            totalCount = 0;
        }
        if(totalCount == 3){
            std::cout<<"You are Blocked!"<<std::endl;
            break;
        }
    }while((userPassword != password));
    return 0;
}
