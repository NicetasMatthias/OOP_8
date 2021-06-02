#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "figure.h"

class Quadrangle : public Figure
{
    unsigned int a,b,c;
    double fi1,fi2;
public:
    Quadrangle(double ia,double ifi1,double ib,double ifi2,double ic);
    double area();
    double perimeter();
};

#endif // QUADRANGLE_H
