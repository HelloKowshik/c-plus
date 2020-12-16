#include<iostream>
#include<cmath>

using namespace std;
//const float PI = 3.1416;
int main()
{
    float area,r;
    cout<<"Enter Radius:"<<endl;
    cin>>r;
    //area = PI * r *r;
    area = M_PI * (r * r);
    cout<<"Area is: "<<area<<endl;
    return 0;
}
