#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape// inherit publically from Shape
{
    private:
        double side = 0;

    public:
        Shape() : Shape("Circle") {};
        Square(double side) : Shape("Square"), side(side) {};
};

#endif
