#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle{

    //Can only be access by functions of this class
    private:
        double length {1.0};
        double width {1.0};

    //Can be access outside the class with the dot operator
    public:
        Rectangle() = default;
        Rectangle(double len, double wid);
        
        bool setLength(double len);
        bool setWidth(double wid);
        double getLength();
        double getWidth();
        double calcArea();
};

#endif