#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "figure.h"

class Ellipse : public Figure
{
private:
    double r1;
    double r2;
public:
    Ellipse(double,double);
    double area();
    double perimeter();
};

#endif // ELLIPSE_H
