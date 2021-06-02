#include "triangle.h"

Triangle::Triangle(double ia, double ifi, double ib)
{
    a = ia;
    b = ib;
    fi = ifi * M_PI / 180;
}

double Triangle::area()
{
    return 0.5*a*b*sin(fi);
}

double Triangle::perimeter()
{
    return a+b+sqrt(a*a+b*b-2*a*b*cos(fi));
}
