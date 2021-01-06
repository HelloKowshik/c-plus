#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<array>
using namespace std;

void print_arr(array<int, 251> arr, int arrSize);

void play_game(){
    int randomNumber = rand() % 251;
    array<int, 251> userGuessArray;
    int guessCount = 0;
    cout<<randomNumber<<endl;
    while(true)
    {
        int userGuess;
        cout<<"Guess a number: ";
        cin>>userGuess;
        userGuessArray[guessCount++] = userGuess;
        if(userGuess == randomNumber){
            cout<<"Your Guess is Correct!"<<endl;
            break;
        }else{
            cout<<"Wrong Guess!"<<endl;
        }
    }
    print_arr(userGuessArray, guessCount);

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
void print_arr(array<int, 251> arr, int arrSize)
{
    cout<<"you have tried following Numbers: ";
    for(int i = 0; i < arrSize; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}
