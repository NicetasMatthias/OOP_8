#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "parallelogram.h"

class Rectangle : public Parallelogram
{
private:
    unsigned int a,b;
public:
    Rectangle(double,double);
};

#endif // RECTANGLE_H
