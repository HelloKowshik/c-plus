#include<iostream>
using namespace std;
int main()
{
    int mark1,mark2;
    cout<<"Please enter 2 grades, separated by a space: "<<endl;
    cin>>mark1>>mark2;
    if(mark1 < 60 && mark2 < 60){
        cout<<"Student Failed:("<<endl;
    }
    else if(mark1 >= 95 && mark2 >= 95){
        cout<<"Student Graduated with Honors:)"<<endl;
    }
    else{
        cout<<"Student Graduated!"<<endl;
    }
    return 0;
}
