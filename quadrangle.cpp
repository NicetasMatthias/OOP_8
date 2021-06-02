#include "quadrangle.h"

Quadrangle::Quadrangle(double ia,double ifi1,double ib,double ifi2,double ic)
{
    a = ia;
    b = ib;
    c = ic;
    fi1 = ifi1 * M_PI / 180;
    fi2 = ifi2 * M_PI / 180;
}


double Quadrangle::area()
{
    double d1, d2, x1, x2 ,x3;
    d1 = sqrt(a*a+b*b-2*a*b*cos(fi1));
    d2 = sqrt(c*c+b*b-2*c*b*cos(fi2));
    x1 = asin(sin(fi1)*a/d1);
    x2 = asin(sin(fi2)*c/d2);
    x3 = M_PI-x1-x2;
    return d1*d2*sin(x3)/2;


}

double Quadrangle::perimeter()
{
    double d1, d2, x1, x2 ,x3,t1,t2;
    d1 = sqrt(a*a+b*b-2*a*b*cos(fi1));
    d2 = sqrt(c*c+b*b-2*c*b*cos(fi2));
    x1 = asin(sin(fi1)*a/d1);
    x2 = asin(sin(fi2)*c/d2);
    x3 = M_PI-x1-x2;
    t1 = b * sin(x2) / sin(x3);
    t2 = b * sin(x1) / sin(x3);
    return a+b+c+sqrt(pow(d1-t1,2)+pow(d2-t2,2)-2*(d1-t1)*(d2-t2)*cos(x3));
}
