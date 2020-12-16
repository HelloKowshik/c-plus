#include<iostream>
using namespace std;
int factorial(int num);
int kCombination(int n, int k);
int main()
{
    int n,k;
    cout<<"Enter the value of n and k(n>=k)"<<endl;
    cin>>n>>k;
    cout<<n<<" choose " <<k<<" is ";
    cout<<kCombination(n, k)<<endl;
    return 0;
}

int factorial(int num)
{
    int i,factRes = 1;
    for(i = 1; i <= num; i++)
    {
        factRes *= i;
    }
    return factRes;
}

int kCombination(int n, int k)
{
    int nFact,kFact,n_kFact,n_kComb;
    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k);
    n_kComb = nFact / (kFact * n_kFact);
    return n_kComb;
}
