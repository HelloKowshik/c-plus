#ifndef TEST_UTILS
#define TEST_UTILS

struct Rectangle{
    double length;
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rect);

double pow(double base, int pow = 3);

#endif // TEST_UTILS
