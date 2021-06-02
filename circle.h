#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

class Circle : public Ellipse
{
private:
    double r;
public:
    Circle(double);
};

#endif // CIRCLE_H
