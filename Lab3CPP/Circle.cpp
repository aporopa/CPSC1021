#include <iostream>
#include <cmath>
#include "Circle.h"

    //Radius function accessed in main
    double Circle::getRadius(){
        return radius;
    }

    //Verification of user data
    bool Circle::setRadius(double rad){
        bool validData = true;

        if(rad >= 0)
            radius = rad;

        //Change bool for error
        else
            validData = false;

        return validData;
    }

    //Calculate and return area of circle
    double Circle::calcArea(){
        return (pow(radius,2) * M_PI);
    }

