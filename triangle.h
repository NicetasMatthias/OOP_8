#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure
{
private:
    double a,b;
    double fi;
public:
    Triangle(double,double,double);
    double area();
    double perimeter();
};

#endif // TRIANGLE_H
