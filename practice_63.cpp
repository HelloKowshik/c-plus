#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int multiArray[][13] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> multiVector = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0, rowSum = 0;
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++){
            sum += multiVector[row][col];
            rowSum += multiVector[row][col];
            cout<<multiVector[row][col]<<"\t";
        }
        cout<<endl;
        cout<<"Sum of Row - "<<row<<" = "<<rowSum<<endl;
        rowSum = 0;
    }
    cout<<"Sum: "<<sum;
    return 0;
}
