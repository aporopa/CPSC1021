#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle{

    //Can only be access by functions of this class
    private:
        double radius {1.0};
        const double PI = 3.14159;

    //Can be access outside the class with the dot operator
    public:
        Circle() = default;
        Circle(double rad);

        bool setRadius(double rad);
        double getRadius();
        double calcArea();
};

#endif