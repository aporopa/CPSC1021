#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle // inherit publically from Shape
{
    private:
        double radius = 0;
        const double PI = 3.14;

    public:
        Circle() : Shape("Circle") {};
        Circle(double radius)
            : Shape("Circle"), radius(radius) {};

        double getArea();
};

#endif