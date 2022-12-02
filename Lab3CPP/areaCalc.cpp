//This lab gives the user the opportunity to calculate the area of various different shapes using classes
//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 09/23/2022
//Time: ~4 hours

//libraries and header files needed
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Trapezoid.h" 

using namespace std;

//main function containing all I/O statements
int main(){

    int userChoice;

    //Menu options
    cout << "Please select a shape for area calculation:" << endl;
    cout << "        1 -- circle" << endl;
    cout << "        2 -- square" << endl;
    cout << "        3 -- rectangle" << endl;
    cout << "        4 -- trapezoid" << endl;
    cout << "        5 -- quit" << endl;
    cout << "\n";

    //Prompt for the users menu choice
    cin >> userChoice;

    //If the user picks Circle
    if(userChoice == 1){
        
        //accessing the circle class
        Circle round;
        double roundRadius;

        cout << "What is the radius of the circle?" << endl;     
        cin  >> roundRadius;

            //Error statement if user inputs a number less than 0
            while(!round.setRadius(roundRadius)){
                cout << "Invalid radius entered.\n";
                cin >> roundRadius;
            }

        //If user enters the correct number then we access the circle member functions getRadius and calcArea
        if(round.setRadius(roundRadius)){
            cout << "\nHere is the circle's data:\n";
            cout << "Radius: " << fixed << setprecision(1) << round.getRadius() << endl;
            cout << "Area: " << fixed << setprecision(1) << round.calcArea() << endl;
        }

    }

    //If the user picks Square
    else if(userChoice == 2){

        //Accessing the square class
        Square square;
        double squareLength;

        //Asking for user input and looping until they put in the correct numbers
        cout << "What is the length of the square?" << endl;
        cin  >> squareLength;

            while (!square.setSide(squareLength)){
                cout << "Invalid rec length entered.\n";
                cin >> squareLength;
            }

        //Accessing member functions the output the length member function and the calcArea specifically to the square shape
        if(square.setSide(squareLength)){
            cout << "\nHere is the square's data:\n";
            cout << "Length: " << fixed << setprecision(1) << square.getSide() << endl;
            cout << "Area: " << fixed << setprecision(1) << square.calcArea() << endl;
        }
    }

    //If the user picks Rectangle
    else if(userChoice == 3){

        //Accessing the rectangle class
        Rectangle rec;
        double recLength, recWidth;

        //Asking for user input and looping until they put in the correct numbers
        cout << "What is the length of the rectangle?" << endl;
        cin  >> recLength;

            while (!rec.setLength(recLength)){
                cout << "Invalid rectangle length entered.\n";
                cin >> recLength;
            }

        cout << "What is the width of the rectangle?" << endl;
        cin  >> recWidth;

            while (!rec.setWidth(recWidth)){
                cout << "Invalid rectangle width entered.\n";
                cin >> recWidth;
            }

        //Member functions of Rectangle class accessing width and length and calculating specific area
        if(rec.setLength(recLength) && rec.setWidth(recWidth)){
            cout << "\nHere is the rectangle's data:\n";
            cout << "Length: " << fixed << setprecision(1) << rec.getLength() << endl;
            cout << "Width: " << fixed << setprecision(1) << rec.getWidth()  << endl;
            cout << "Area: " << fixed << setprecision(1) << rec.calcArea() << endl;
        }
    }

    //If the user picks trapezoid
    else if(userChoice == 4){

        //Accessing trapezoid class
        Trapezoid trap;
        double trapBase, trapTop, trapHeight;

        //Asking for user input and looping until they put in the correct numbers
        cout << "What is the base1 of the trapezoid?" << endl;
        cin >> trapBase;

            while (!trap.setBase1(trapBase)){
                cout << "Invalid base1 length entered.\n";
                cin >> trapBase;
            }

        cout << "What is the base2 of the trapezoid?" << endl;
        cin >> trapTop;

            while (!trap.setBase2(trapTop)){ 
                cout << "Invalid base2 length entered.\n";
                cin >> trapTop;
            }

        cout << "What is the height of the trapezoid?" << endl;
        cin >> trapHeight;

            while (!trap.setHeight(trapHeight)){ 
                cout << "Invalid height entered.\n";
                cin >> trapHeight;
            }


        //Accessing member functions that relay the bases and height according to the trapezoid class
        if(trap.setBase2(trapTop) && trap.setHeight(trapHeight) && trap.setBase1(trapBase)){
            cout << "\nHere is the trapezoid's data:\n";
            cout << "Base1: " << fixed << setprecision(1) << trap.getBase1()  << endl;
            cout << "Base2: " << fixed << setprecision(1) << trap.getBase2() << endl;
            cout << "Height: " << fixed << setprecision(1) << trap.getHeight()  << endl;
            cout << "Area: " << fixed << setprecision(1) << trap.calcArea() << endl;
        }
    }

    //If the user wants to quit
    else if(userChoice == 5){
        cout << "Goodbye!";

        return 0;
    }


    return 0;
}