#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"

template<typename Temp>

//inhereted trapezoid class
class Trapezoid : public Shape<Temp>{
    //priavte initialized member variables
    private:
        Temp base1{0};
        Temp base2{0};
        Temp height{0};

    public:
        //initialized constructors
        Trapezoid() : Shape<Temp>("Trapezoid") {};
        Trapezoid(Temp base1, Temp base2, Temp height) : Shape<Temp>("Trapezoid"), base1(base1), base2(base2), height(height) {};

        Temp getArea(){
            double value = ((base1 + base2) / 2) * height;
            return value;
        }
};


#endif