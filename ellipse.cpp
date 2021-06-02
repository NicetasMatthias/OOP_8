#include "ellipse.h"

Ellipse::Ellipse(double t1,double t2)
{
    r1 = qMax(t1,t2);
    r2 = qMin(t1,t2);
}

double Ellipse::area()
{
    return M_PI * r1 * r2;
}

double Ellipse::perimeter()
{
    return 4 * (M_PI * r1 * r2 + (r1 - r2))/(r1+r2);
}
