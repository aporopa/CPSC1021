#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

template<typename Temp>
class Rectangle : public Shape<Temp>{
    //private member variabels
    private:
        Temp length{0};
        Temp width{0};

    public:
        Rectangle() = default;
        Rectangle(Temp length, Temp width) : Shape<Temp>("Rectangle"), length{length}, width{width} {};

        virtual Temp getArea() override{ 
            return length * width; 
        }

};

#endif