//BMI Calculator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float weight,height,BMI;
    cout<<"Enter Weight(Pounds) and Height(inches): "<<endl;
    cin>>weight>>height;
    weight = weight * 0.453592;
    height = height * 0.0254;
    cout<<"Weight: "<<weight<<" Height: "<<height<<endl;
    BMI = weight/(height * height);
    cout<<"BMI is: "<<endl;
    cout<<std::setprecision(2)<< fixed<< BMI<<endl;
    return 0;
}
