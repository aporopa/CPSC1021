//This program allows the user to calculate sales data for a division
//Abigail Poropatich, Dev Patel, AJ Hay
//My Class: CPSC 1021 
//Date: 11/2/2022
//Time: 30 minutes

#include <iostream>
#include <iomanip>
#include <vector>
#include "DivSales.h"

using namespace std;

int main(){

    //variables
    vector<DivSales> vec(4);
    double one, two, three, four;

    //first for loop to collect and confirm data for each quarter
    for(int i = 0; i < 4; i++){
        cout << "Enter sales data for Division " << (i + 1) << endl;
        cout << "Quarter 1: ";
        cin >> one;

        //validation
        while(one < 0){
            cout << "Please enter a valid number greater than zero: ";
            cin >> one;
        }

        cout << "Quarter 2: ";
        cin >> two;

        while(two < 0){
            cout << "Please enter a valid number greater than zero: ";
            cin >> one;
        }

        cout << "Quarter 3: ";
        cin >> three;

        while(three < 0){
            cout << "Please enter a valid number greater than zero: ";
            cin >> three;
        }

        cout << "Quarter 4: ";
        cin >> four;

        while(four < 0){
            cout << "Please enter a valid number greater than zero: ";
            cin >> four;
        }
        
        //fill the vector with each quarter numerical information
        vec[i].setSales(one, two, three, four);
    }

    //second for loop that outputs each division total
    for(int i = 0; i < 4; i++){
        cout << "Total Sales for Division " << i + 1 << ": $" << fixed << setprecision(2) << vec[i].getDivSales() << endl;
    }

    //output total
    cout << "Total Corpoate Sales: $" << fixed << setprecision(2) << vec[3].getCorpSales()<<endl;

    return 0;
}