#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "isoscelestriangle.h"

class EquilateralTriangle : public IsoscelesTriangle
{
private:
    double a;
public:
    EquilateralTriangle(double);
};

#endif // EQUILATERALTRIANGLE_H
