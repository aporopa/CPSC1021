#include "DivSales.h"
#include <vector>

using namespace std;

double DivSales::totalSales;

//constructor definition
DivSales::DivSales(double tot, double div){
    divSales = div;
    totalSales = tot;
}

double DivSales::getDivSales(){
    return divSales;
}

double DivSales::getCorpSales(){
    return totalSales;
}

//filling the vector and associating divSales with setSales
void DivSales::setSales(double quarterOne, double quarterTwo, double quarterThree, double quarterFour){
    sales.push_back(quarterOne);
    sales.push_back(quarterTwo);
    sales.push_back(quarterThree);
    sales.push_back(quarterFour);

    divSales = quarterOne + quarterTwo + quarterThree + quarterFour;

    totalSales = totalSales + (quarterOne + quarterTwo + quarterThree + quarterFour);
}