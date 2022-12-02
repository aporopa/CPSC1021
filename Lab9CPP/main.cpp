// Programmer: Abigail Poropatich
// Date: 12/02/2022
// Class: CPSC 1021 - 09
// Description: Program to output  the area of each shape, first using double values for all member variables, then using integer values.

#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    //declaring initialization values for both double and integer for each shape 
    Circle<double> doubleC{2.0};
    Circle<int> intC{2};

    Square<double> doubleS {2.0};
    Square<int> intS{2};

    Rectangle<double> doubleR{2.5,3.0};
    Rectangle<int> intR{2, 3};

    Trapezoid<double> doubleT{2.5, 3.5, 4.0};
    Trapezoid<int> intT{2, 6, 5};

    vector <Shape<double>*> vectorDouble {&doubleC, &doubleS, &doubleR, &doubleT};
    vector <Shape<int>*> vectorInt {&intC, &intS, &intR, &intT};

    //loops to print values
    for(Shape<double> * intPrint : vectorDouble){
        cout << fixed << setprecision(1) << "Area of " << intPrint->printName() << " is: ";
        cout << intPrint->getArea() << endl;
    }

    for(Shape<int> * doublePrint : vectorInt){
        cout << "Area of " << doublePrint->printName() << " is: ";
        cout << doublePrint->getArea() << endl;
    }

    return 0;
}