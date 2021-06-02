#include "rectangle.h"

Rectangle::Rectangle(double ia, double ib): Parallelogram(ia,90,ib)
{
    a = qMax(a,b);
    b = qMin(a,b);
}
