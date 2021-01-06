#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

void print_vector(vector<int> data);
void save_score(int guess_count);

void play_game(){
    int randomNumber = rand() % 251;
    int counting = 0;
    vector<int> userGuessVector;
    cout<<randomNumber<<endl;
    while(true)
    {
        int userGuess;
        cout<<"Guess a number: ";
        cin>>userGuess;
        counting++;
        userGuessVector.push_back(userGuess);
        if(userGuess == randomNumber){
            cout<<"Your Guess is Correct!"<<endl;
            break;
        }else{
            cout<<"Wrong Guess!"<<endl;
        }
    }
    print_vector(userGuessVector);
    save_score(counting);
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
void save_score(int guess_count)
{
    ifstream input("best_scores.txt");
    if(!input.is_open()){
        cout<<"Unable to access the file!"<<endl;
        return;
    }
    int best_score;
    input>>best_score;
    ofstream output("best_scores.txt");
    if(!output.is_open()){
        cout<<"Unable to access the file!"<<endl;
        return;
    }
    if(guess_count < best_score){
        output<<guess_count;
    }else{
        output<<best_score;
    }
}
