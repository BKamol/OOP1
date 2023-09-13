#include "Triangle.h"



Triangle::Triangle(double ap, double bp, double cp)
{
    a = ap;
    b = bp;
    c = cp;
}

double Triangle::get_a()
{
    return a;
}

double Triangle::get_b()
{
    return b;
}

double Triangle::get_c()
{
    return c;
}

double Triangle::get_square()
{
    double p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::get_perimeter()
{
    return a+b+c;
}

bool Triangle::isosceles()
{
    return a == b || b == c || a == c;
}

Triangle Triangle::create_similar(double k)
{
    Triangle T(k * a, k * b, k * c);
    return T;
}
