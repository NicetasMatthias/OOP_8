#include "rhombus.h"

Rhombus::Rhombus(double ia,double ifi):Parallelogram(ia,ifi,ia)
{
    a = ia;
    fi = qMax(ifi,180-ifi) * M_PI / 180;
}
