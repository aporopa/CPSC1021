#include "Invoice.h"
#include "Customer.h"
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

Truck truck;
Car car;
Motorcycle motorcycle;


Invoice::Invoice(int p, char d, int s){
    permit = p;
    discount = d;
    service = s;
}

int Invoice::getService(){
    service = 50; //admin fee
    return service;
}

int Invoice::getDiscount(){
    if(details.getYear() < 1980 || customer.getStatus() == 't'){
        discount = -25;
    }
    else
        discount = 0;

    return discount;
}

int Invoice::getPermitCost(){
    if(customer.getPermit() == "Commuter" && specifics.getDuration() == "Annual"){
        permit = 200;
    }
    else if(customer.getPermit() == "Commuter" && specifics.getDuration() == "Semester"){
        permit = 100;
    }
    else if(customer.getPermit() == "Commuter" && specifics.getDuration() == "Daily"){
        permit = 10;
    }
    else if(customer.getPermit() == "Commuter" && specifics.getDuration() == "Hourly"){
        permit = 3;
    }
    
    else if(customer.getPermit() == "Employee" && specifics.getDuration() == "Annual"){
        permit = 150;
    }
    else if(customer.getPermit() == "Employee" && specifics.getDuration() == "Semester"){
        permit = 75;
    }
    else if(customer.getPermit() == "Employee" && specifics.getDuration() == "Daily"){
        permit = 5;
    }
    else if(customer.getPermit() == "Employee" && specifics.getDuration() == "Hourly"){
        permit = 3;
    }

    else if(customer.getPermit() == "Resident" && specifics.getDuration() == "Annual"){
        permit = 175;
    }
    else if(customer.getPermit() == "Resident" && specifics.getDuration() == "Semester"){
        permit = 60;
    }
    else if(customer.getPermit() == "Resident" && specifics.getDuration() == "Daily"){
        permit = 5;
    }
    else if(customer.getPermit() == "Resident" && specifics.getDuration() == "Hourly"){
        permit = 3;
    }
    return permit;
}

int Invoice::calcTotal(int se, int di, int pe){
    int charges = 0;
    charges = pe + di + se;

    return charges;
}

string name;

void Invoice::PrintInvoice(){
    cout << "Invoice: " << endl;
    cout << "   Personal Information: " <<  endl;
    cout << "     " << personal.getName() << endl;
    cout << "     " << personal.getAddress() << endl;
    cout << "     " << personal.getEmail() << "\n";
    cout << "     " << customer.getStatus() << "\n";
    cout << "     " << invoice.getPermitCost() << endl;
    cout << "     " << attribute.getInsured() << "\n\n";
    cout << "   Permit Information: " <<  endl;
    cout << "     " << customer.getPermit() << endl;
    cout << "     " << specifics.getDuration() << endl;
    cout << "     " << invoice.getPermitCost() << "\n\n";
    cout << "   Car Body: " <<  endl;
    cout << "     " << vehicle.getMake() << endl;
    cout << "     " << vehicle.getModel() << endl;
    cout << "     " << vehicle.getType() << endl;
    cout << "     " << attribute.getColor() << "\n\n";
    cout << "   Car Details: " <<  endl;
    cout << "     " << details.getYear() << endl;
    cout << "     " << attribute.getState() << endl;
    cout << "     " << details.getLicense() << endl;
    cout << "     " << details.getFactory() << "\n\n\n";
    cout << "   Cost: " <<  endl;
    cout << "     " << "Permit cost: "<< invoice.getPermitCost() << endl;
    cout << "     " << "Service fee: "<< invoice.getService() << endl;
    cout << "     " << "Discount: " << invoice.getDiscount() << "\n\n";
    cout << "     " << "Total: " << invoice.calcTotal(service, discount, permit) << endl;

}