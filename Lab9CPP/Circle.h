#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename Temp>
class Circle : public Shape<Temp>{
    //private member variables
    private:
        Temp radius{0.0};
        const double PI{3.14};

    public:
        //constructors
        Circle() : Shape<Temp>("Circle") {};
        Circle(Temp radius) : Shape<Temp>("Circle"), radius(radius) {};

        Temp getArea(){ 
            return radius * radius * PI;
        }
};

#endif