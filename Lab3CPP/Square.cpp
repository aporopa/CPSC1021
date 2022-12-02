#include <iostream>
#include <cmath>
#include "Square.h"

//Length function accessed in main
double Square::getSide(){
    return length;
}

//Verification of user input
bool Square::setSide(double len){
    bool validate = true;

    if(len >= 0)
        length = len;
    
    //Error check, change bool if less than 0
    else
        validate = false;
    
    return validate;
}

//Calculate and return the area of square
double Square::calcArea(){
    return (pow(length, 2));
}