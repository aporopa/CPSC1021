#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle{

    //Can only be access by functions of this class
    private:
        double radius;

    //Can be access outside the class with the dot operator
    public:
        bool setRadius(double);
        double getRadius();
        double calcArea();
};

#endif