#include<iostream>
using namespace std;
int analyzeDigits(int num, int& outSum);

int main()
{
    int num,countDigs,sumDigs;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    countDigs = analyzeDigits(num, sumDigs);
    cout<<num<<" has "<<countDigs<<" digits AND their sum is "<<sumDigs<<endl;
    return 0;
}

int analyzeDigits(int num, int& outSum)
{
    int counting = 0 , sum = 0, currDig;
    while(num > 0)
    {
        currDig = num % 10;
        counting++;
        sum += currDig;
        num = num / 10;
    }
    outSum = sum;
    return counting;
}
