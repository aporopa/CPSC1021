#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle{

    //Can only be access by functions of this class
    private:
        double length;
        double width;

    //Can be access outside the class with the dot operator
    public:
        bool setLength(double);
        bool setWidth(double);
        double getLength();
        double getWidth();
        double calcArea();
};

#endif