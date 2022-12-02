#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid{

    //Can only be access by functions of this class
    private:
        double base, top, height;

    //Can be access outside the class with the dot operator
    public:
        double getBase1();
        double getBase2();
        double getHeight();
        bool setBase1(double);
        bool setBase2(double);
        bool setHeight(double);
        double calcArea();
};

#endif