#include<iostream>
#include<string>
using namespace std;
float bmimetricf(int weight, float height);
int main()
{
    int weight;
    float height;
    string status;
    double result;
    cout<<"Enter Height AND Weight: "<<endl;
    cin>>height>>weight;
    result = bmimetricf(weight, height);
    if(result < 18.5)
        status = "Underweight";
    else if(result >= 18.5 && result <=24.9)
        status = "Normal";
    else if(result >= 25.0 && result <= 29.9)
         status = "Overweight";
    else
        status = "Obese";

    cout<<"BMI is "<<result<<" status is "<<status<<endl;
    return 0;
}
float bmimetricf(int weight, float height)
{
    float bmi;
    bmi = weight / (height * height);
    return bmi;
}
