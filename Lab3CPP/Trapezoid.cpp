#include <iostream>
#include "Trapezoid.h"

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
bool Trapezoid::setBase1(double b){
    bool validate = true;

    if(b >= 0)
        base = b;

    //Error check, bool is false
    else
        validate = false;

    return validate;
}

//Height error check
bool Trapezoid::setHeight(double h){
    bool validate = true;

    if(h >= 0)
        height = h;
    
    //Error check, bool is false
    else
        validate = false;
    

    return validate;
}

//Base 2 error check
bool Trapezoid::setBase2(double t){
    bool validate = true;

    if(t >= 0)
        top = t;
    
    //Error check, bool is false
    else
        validate = false;
    

    return validate;
}

//Area member function
double Trapezoid::calcArea(){
    return(((top + base)/2) * height);
}