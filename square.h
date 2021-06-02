#ifndef SQUARE_H
#define SQUARE_H

#include <rhombus.h>
#include <rectangle.h>


class Square : public Rectangle, public Rhombus
{
private:
    double a;
public:
    Square(double);
};

#endif // SQUARE_H
