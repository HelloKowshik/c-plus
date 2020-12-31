#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;

void print_vector(vector<int> data);

void play_game(){
    int randomNumber = rand() % 251;
    vector<int> userGuessVector;
    cout<<randomNumber<<endl;
    while(true)
    {
        int userGuess;
        cout<<"Guess a number: ";
        cin>>userGuess;
        userGuessVector.push_back(userGuess);
        if(userGuess == randomNumber){
            cout<<"Your Guess is Correct!"<<endl;
            break;
        }else{
            cout<<"Wrong Guess!"<<endl;
        }
    }
    print_vector(userGuessVector);

}
int main()
{
    srand(time(NULL));
    int choice;
    do{
        cout<<"0. Quit"<<endl<<"1. Play Game\n";
        cin>>choice;
        switch(choice)
        {
            case 0:
                cout<<"Thanks for playing."<<endl;
                break;
            case 1:
                play_game();
                break;
        }

    }while(choice != 0);
    return 0;
}
void print_vector(vector<int> data)
{
    cout<<"you have tried following Numbers: ";
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<"\t";
    cout<<endl;
}
