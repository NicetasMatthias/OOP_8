#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrangle.h"

class Parallelogram : public Quadrangle
{
private:
    double a,b;
    double fi;

public:
    Parallelogram(double,double,double);
 //   double area();
 //   double perimeter();
};

#endif // PARALLELOGRAM_H
