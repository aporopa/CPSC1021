#ifndef SQUARE_H_
#define SQUARE_H_

class Square{

    //Can only be access by functions of this class
    private:
        double length {1.0};

    //Can be access outside the class with the dot operator
    public:
        Square() = default;
        Square(double len);

        bool setSide(double len);
        double getSide();
        double calcArea();
};

#endif