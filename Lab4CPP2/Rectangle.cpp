#include <iostream>
#include "Rectangle.h"

    //Constructor definition
    Rectangle::Rectangle(double len, double wid) : length {len}, width {wid} {}

    //length member function accessed in main
    double Rectangle::getLength(){
        return length;
    }

    //Width member function accessed in main
    double Rectangle::getWidth(){
        return width;
    }

    //Verification of length function accessed in main
    bool Rectangle::setLength(double len){
        bool validData = true;

        if(len >= 0)
            length = len;

        //If the user input is less than zero the bool change will relay error in main
        else
            validData = false;

        return validData;
    }

    //Verification of width function accessed in main
    bool Rectangle::setWidth(double wid){
        bool validData = true;

        if(wid>=0)
            width = wid;

        //If the user input is less than zero the bool change will relay error in main
        else
            validData = false;

        return validData;
    }

    //Area calculation function accessed in main
    double Rectangle::calcArea(){
        return (length * width);
    }