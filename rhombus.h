#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "parallelogram.h"

class Rhombus : public Parallelogram
{
    unsigned int a;
    double fi;
public:
    Rhombus(double,double);
};

#endif // RHOMBUS_H
