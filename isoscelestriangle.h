#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
    double a;
    double fi;
public:
    IsoscelesTriangle(double,double);
};

#endif // ISOSCELESTRIANGLE_H
