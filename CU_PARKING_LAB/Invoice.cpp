#include "Invoice.h"
#include "Customer.h"
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

Truck truck;
Car car;
Motorcycle motorcycle;
Resident resident;
Employee employee;
Visitor visitor;
Invoice invoice;

//Invoicr constructor definitions
Invoice::Invoice(int p, int d, int s){
    permit = p;
    discount = d;
    service = s;
}

//setter function definitions
void Invoice::setPermit(int p){
    permit = p;
}
void Invoice::setDiscount(int d){
    discount = d;
}
void Invoice::setService(int s){
    service = s;
}

//getter functions
int Invoice::getPermit(){
    return permit;
}
int Invoice::getDiscount(){
    return discount;
}
int Invoice::getService(){
    return service;
}

int Invoice::calcTotal(int permit, int service, int discount)
{
    return service + permit - discount;
}

//printing definitions
void Invoice::aPrintInvoice(Truck truck, Resident resident){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << truck.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << truck.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << truck.getYear() << endl;
    cout << "   Color: " <<  endl;
    cout << "      " << truck.getColor() << endl;
    cout << "   Body: " <<  endl;
    cout << "      " << truck.getBody() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << resident.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << resident.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << resident.getEmail() << endl;
    cout << "   CUID: " <<  endl;
    cout << "      " << resident.getCUID() << endl;
    cout << "   Level: " <<  endl;
    cout << "      " << resident.getLevel() << endl;

}
void Invoice::bPrintInvoice(Truck truck, Employee employee){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << truck.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << truck.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << truck.getYear() << endl;
    cout << "   Color: " <<  endl;
    cout << "      " << truck.getColor() << endl;
    cout << "   Body: " <<  endl;
    cout << "      " << truck.getBody() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << employee.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << employee.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << employee.getEmail() << endl;
    cout << "   Department: " <<  endl;
    cout << "      " << employee.getDepartment() << endl;
    cout << "   Tenure: " <<  endl;
    cout << "      " << employee.getTenure() << endl;
    
}
void Invoice::cPrintInvoice(Truck truck, Visitor visitor){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << truck.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << truck.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << truck.getYear() << endl;
    cout << "   Color: " <<  endl;
    cout << "      " << truck.getColor() << endl;
    cout << "   Body: " <<  endl;
    cout << "      " << truck.getBody() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << visitor.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << visitor.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << visitor.getEmail() << endl;
    cout << "   Reason: " <<  endl;
    cout << "      " << visitor.getReason() << endl;
    cout << "   State: " <<  endl;
    cout << "      " << visitor.getState() << "\n";
}
void Invoice::dPrintInvoice(Car car, Resident resident){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << car.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << car.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << car.getYear() << endl;
    cout << "   Seats: " <<  endl;
    cout << "      " << car.getSeats() << endl;
    cout << "   Plate: " <<  endl;
    cout << "      " << car.getPlate() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << resident.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << resident.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << resident.getEmail() << endl;
    cout << "   CUID: " <<  endl;
    cout << "      " << resident.getCUID() << endl;
    cout << "   Level: " <<  endl;
    cout << "      " << resident.getLevel() << endl;
    //cout << invoice.calcTotal();
}
void Invoice::ePrintInvoice(Car car, Employee employee){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << car.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << car.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << car.getYear() << endl;
    cout << "   Seats: " <<  endl;
    cout << "      " << car.getSeats() << endl;
    cout << "   Plate: " <<  endl;
    cout << "      " << car.getPlate() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << employee.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << employee.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << employee.getEmail() << endl;
    cout << "   Department: " <<  endl;
    cout << "      " << employee.getDepartment() << endl;
    cout << "   Tenure: " <<  endl;
    cout << "      " << employee.getTenure() << endl;
}
void Invoice::fPrintInvoice(Car car, Visitor visitor){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << car.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << car.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << car.getYear() << endl;
    cout << "   Seats: " <<  endl;
    cout << "      " << car.getSeats() << endl;
    cout << "   Plate: " <<  endl;
    cout << "      " << car.getPlate() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << visitor.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << visitor.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << visitor.getEmail() << endl;
    cout << "   Reason: " <<  endl;
    cout << "      " << visitor.getReason() << endl;
    cout << "   State: " <<  endl;
    cout << "      " << visitor.getState() << "\n";
}
void Invoice::gPrintInvoice(Motorcycle motorcycle, Resident resident){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << motorcycle.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << motorcycle.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << motorcycle.getYear() << endl;
    cout << "   Type: " <<  endl;
    cout << "      " << motorcycle.getType() << endl;
    cout << "   VIN: " <<  endl;
    cout << "      " << motorcycle.getVin() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << resident.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << resident.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << resident.getEmail() << endl;
    cout << "   CUID: " <<  endl;
    cout << "      " << resident.getCUID() << endl;
    cout << "   Level: " <<  endl;
    cout << "      " << resident.getLevel() << endl;

}
void Invoice::hPrintInvoice(Motorcycle motorcycle, Visitor visitor){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << motorcycle.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << motorcycle.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << motorcycle.getYear() << endl;
    cout << "   Type: " <<  endl;
    cout << "      " << motorcycle.getType() << endl;
    cout << "   VIN: " <<  endl;
    cout << "      " << motorcycle.getVin() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << visitor.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << visitor.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << visitor.getEmail() << endl;
    cout << "   Reason: " <<  endl;
    cout << "      " << visitor.getReason() << endl;
    cout << "   State: " <<  endl;
    cout << "      " << visitor.getState() << "\n";
}
void Invoice::iPrintInvoice(Motorcycle motorcycle, Employee employee){
    cout << "Invoice: " << endl;
    cout << "   Make: " <<  endl;
    cout << "      " << motorcycle.getMake() << endl;
    cout << "   Model: " <<  endl;
    cout << "      " << motorcycle.getModel() << endl;
    cout << "   Year: " <<  endl;
    cout << "      " << motorcycle.getYear() << endl;
    cout << "   Type: " <<  endl;
    cout << "      " << motorcycle.getType() << endl;
    cout << "   VIN: " <<  endl;
    cout << "      " << motorcycle.getVin() << endl;
    cout << "   Name: " <<  endl;
    cout << "      " << employee.getName() << endl;
    cout << "   Address: " <<  endl;
    cout << "      " << employee.getAddress() << endl;
    cout << "   Email: " <<  endl;
    cout << "      " << employee.getEmail() << endl;
    cout << "   Department: " <<  endl;
    cout << "      " << employee.getDepartment() << endl;
    cout << "   Tenure: " <<  endl;
    cout << "      " << employee.getTenure() << endl;
}

void Invoice::printOutputTotal(int total)
{
    cout << "------------" << endl;
    cout << "Total: $" << total << ".00" << endl;
}