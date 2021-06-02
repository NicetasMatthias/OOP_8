#include "parallelogram.h"

Parallelogram::Parallelogram(double ia,double ifi,double ib):Quadrangle(ia,ifi,ib,180 - ifi,ia)
{
    a = qMax(ia,ib);
    b = qMin(ia,ib);
    fi = qMax(ifi,180-ifi) * M_PI / 180;
}
