#ifndef INVOICE_H_
#define INVOICE_H_

#include "Vehicle.h"
#include "Customer.h"

using namespace std; 

//Invoice class declaration
class Invoice{

    //private member variables
    private:
        int permit;
        int discount;
        int service;

    //public member functions
    public:
        Invoice() = default; //default constructor
        Invoice(int p, int d, int s);

        //setter functions
        void setPermit(int p);
        void setDiscount(int d);
        void setService(int s);

        //getter functions
        int getPermit();
        int getDiscount();
        int getService();

        void printOutputTotal(int total);
        int calcTotal(int permit, int service, int discount);
        
        void aPrintInvoice(Truck truck, Resident resident);
        void bPrintInvoice(Truck truck, Employee employee);
        void cPrintInvoice(Truck truck, Visitor visitor);
        void dPrintInvoice(Car car, Resident resident);
        void ePrintInvoice(Car car, Employee employee);
        void fPrintInvoice(Car car, Visitor visitor);
        void gPrintInvoice(Motorcycle motorcycle, Resident resident);
        void hPrintInvoice(Motorcycle motorcycle, Visitor visitor);
        void iPrintInvoice(Motorcycle motorcycle, Employee employee);

};


#endif
