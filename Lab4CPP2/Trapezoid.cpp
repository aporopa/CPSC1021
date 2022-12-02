#include <iostream>
#include "Trapezoid.h"

//Constructor definition
Trapezoid::Trapezoid(double bas, double to, double hi) : base {bas}, top {to}, height {hi} {}

//Three functions to relay specific class data to main, accessed using the dot operator
double Trapezoid::getBase1(){
    return base;
}

double Trapezoid::getHeight(){
    return height;
}

double Trapezoid::getBase2(){
    return top;
}

//Base 1 error check
bool Trapezoid::setBase1(double bas){
    bool validate = true;

    if(bas >= 0)
        base = bas;

    //Error check, bool is false
    else
        validate = false;

    return validate;
}

//Height error check
bool Trapezoid::setHeight(double hi){
    bool validate = true;

    if(hi >= 0)
        height = hi;
    
    //Error check, bool is false
    else
        validate = false;
    

    return validate;
}

//Base 2 error check
bool Trapezoid::setBase2(double to){
    bool validate = true;

    if(to >= 0)
        top = to;
    
    //Error check, bool is false
    else
        validate = false;
    

    return validate;
}

//Area member function
double Trapezoid::calcArea(){
    return(((top + base)/2) * height);
}