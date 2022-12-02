#ifndef SQUARE_H_
#define SQUARE_H_

class Square{

    //Can only be access by functions of this class
    private:
        double length;

    //Can be access outside the class with the dot operator
    public:
        bool setSide(double);
        double getSide();
        double calcArea();
};

#endif