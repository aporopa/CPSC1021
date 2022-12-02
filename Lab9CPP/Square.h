#ifndef SQUARE_H_
#define SQUARE_H_

#include <cmath>
#include "Shape.h"

template <typename Temp>

//inhereted Square class
class Square : public Shape<Temp>
{
    private:
        Temp side{0};

    public:
        Square() : Shape<Temp>("Circle") {};
        Square(Temp side) : Shape<Temp>("Square"), side(side) {};

        Temp getArea(){ 
            return side*side; 
        }
};

#endif