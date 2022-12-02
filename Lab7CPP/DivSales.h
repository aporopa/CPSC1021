#ifndef DIVSALES_H_
#define DIVSALES_H_

#include <vector>

class DivSales{

    std::vector<double> sales;

    private:
        static double totalSales;
        double divSales;

    public:
        //constructors
        DivSales() = default;
        DivSales(double tot, double div);

        //getter and setter functions
        void setSales(double, double, double, double);
        double getDivSales();
        double getCorpSales();
};

#endif