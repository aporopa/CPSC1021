//This program allows user to imput certain dates and output a chronological list
//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 10/24/2022
//Time: ~2 hours

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include "Date.h"

using namespace std;

//Code for command line arguments
int main(int argc, char const *argv[]){
    int inputM, inputD, inputY;
    int max;
    
    //vector for date class
    vector<Date> calendar;
    string str;
    Date arb;

    //import file
    ifstream userInput;
    userInput.open(argv[1], ios::in);

    //The amount of dates is the first line
    userInput >> max;
    for(int i = 0; i < static_cast<int> (max); i++){
        userInput >> inputM;
        userInput >> inputD;
        userInput >> inputY;
        
        //fill the class arb with month and day and year
        Date arb(inputM, inputD, inputY);
        
        //add it to the vector
        calendar.push_back(arb);
    }

    //call the sort funtion
    sort(calendar.begin(), calendar.end(), Date::compare);

    //loop to output to screen in order
    for(int i = 0; i < static_cast<int>(max); i++){
        cout << calendar.at(i).print() << endl;
    }
    
    userInput.close();

    return 0;
}