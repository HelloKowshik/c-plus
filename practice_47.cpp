#include<iostream>
using namespace std;
class Circle{
private:
    double radius;
    const float PI = 3.1416;
public:
    double area(double r){
        radius = r;
        return (PI * radius * radius);
    }
};
int main()
{
    Circle ball;
    cout<<"Area = "<<ball.area(12.25)<<endl;
    return 0;
}
