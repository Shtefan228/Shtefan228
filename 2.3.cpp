#include <iostream>
#include <math.h>
//heron formula
double area(double x, double y, double z) {
    double p = (x + y + z) / z;
    return sqrt(p * (p - x) * (p - y) * (p - z));


}

int main()
{
    double a, b, c;
    printf("a, b, c:\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    double s = area(a, b, c);
    printf("area of triangle is %lf", s);


}