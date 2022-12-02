#ifndef INVOICE_H_
#define INVOICE_H_

using namespace std; 

class Invoice{

    private:
        int permit;
        int discount;
        int service;

    public:
        Invoice() = default; //default constructor
        Invoice(int p, char d, int s);

        //getter functions
        int getPermitCost();
        int getDiscount();
        int getService();
        
        int calcTotal(int, int, int);
        void PrintInvoice();

};


#endif