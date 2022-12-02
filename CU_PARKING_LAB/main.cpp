//This program allows the user to calculate ccination status.
//Abigail Poropatich
//My Class: CPSC 1020 
//Date: 10/14/2022
//Time: ~10 hours

#include "Vehicle.h"
#include "Customer.h"
#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    //Declaring the car information and the invoice variables
    int serviceFee = 50;
    int total;
    int dis = 0;
    Invoice invoice;
    string classEntry;
    Car car;
    Motorcycle motorcycle;
    Truck truck;
    string make, model, plate, color, body, type, vin;
    int year, seats;

    //setting the serviceFee
    invoice.setService(serviceFee);
    invoice.getService();

    //Prompt the user for objects of the vehicle class
    cout << "Welcome to CU Parking services. Please start by selecting your vehicle (Motorcycle, Truck, Car): " << endl;
    getline(cin, classEntry);

    //If the user chooses Car
    if(classEntry == "Car"){
        cout << "Please enter the make of your car: " << endl;
        getline(cin, make);
        car.setMake(make);
        car.getMake();

        cout << "Enter the model of your car: " << endl;
        getline(cin, model);
        car.setModel(model);
        car.getModel();

        cout << "Enter the year your vehicle was made: " << endl;
        cin >> year;
            while(!(car.setYear(year))){
                    cout << "Invalid year. Please enter again: " << endl;
                    cin >> year;
                }
        car.getYear();

        cout << "Please enter the amount of seats your car holds: " << endl;
        cin >> seats;
        car.setSeats(seats);
        car.getSeats();

        cin.ignore(200, '\n');
        cout << "Please enter your license plate: " << endl;
        getline(cin, plate);
        car.setPlate(plate);
        car.getPlate();
    }

    //If the user chooses Truck
    else if(classEntry == "Truck"){
        cout << "Please enter the make of your car: " << endl;
        getline(cin, make);
        truck.setMake(make);
        truck.getMake();

        cout << "Enter the model of your car: " << endl;
        getline(cin, model);
        truck.setModel(model);
        truck.getModel();

        cout << "Enter the year your vehicle was made: " << endl;
        cin >> year;
            //statement to check whether the year is within the valid range of cars in the real world
            while(!(truck.setYear(year))){
                    cout << "Invalid year. Please enter again: " << endl;
                    cin >> year;
                }
        truck.getYear();

        //clear the queue
        cin.ignore(200, '\n');
        cout << "Please enter the color of your vehicle: " << endl;
        getline(cin, color);
        truck.setColor(color);
        truck.getColor();

        cout << "Please enter the body type of your vehicle (2 door/4 door): " << endl;
        getline(cin, body);
        truck.setBody(body);
        truck.getBody();
    }

    //If the user chooses motorcycle
    else if(classEntry == "Motorcycle"){
        cout << "Please enter the make of your car: " << endl;
        getline(cin, make);
        motorcycle.setMake(make);
        motorcycle.getMake();

        cout << "Enter the model of your car: " << endl;
        getline(cin, model);
        motorcycle.setModel(model);
        motorcycle.getModel();

        cout << "Enter the year your vehicle was made: " << endl;
        cin >> year;
            while(!(truck.setYear(year))){
                    cout << "Invalid year. Please enter again: " << endl;
                    cin >> year;
                }
        truck.getYear();

        cout << "Please specify the type of motorcycle (Road Bike, Moped, Dirt Bike): " << endl;
        cin.ignore(200, '\n');
        getline(cin, type);
        //validates and limits the users motorcycle choice
        while(!(motorcycle.setType(type))){
                    cout << "Invalid type. Please enter again: " << endl;
                    getline(cin, type);
                }
        motorcycle.getType();

        cout << "Please enter your VIN: " << endl;
        getline(cin, vin);
        motorcycle.setVin(vin);
        motorcycle.getVin();

    }
    //If the user does not pick within the defined classes from initial prompt
    else{
        cout << "Invalid input. Bye bye!" << endl;
        return 0;
    }

    //User specific classes that will define the permit price
    Resident resident;
    Employee employee;
    Visitor visitor;
    string classStatus, name, email, address, cuid, level, department, tenure, reason, state;

    //prompt user for their status at the university
    cout << "Thank you for your vehicle information. Please select your user status (Resident, Employee, Visitor): " << endl;
    getline(cin, classStatus);

    //if the user is a student here
    if(classStatus == "Resident"){

        cout << "Please enter your full name: " << endl;
        getline(cin, name);
        resident.setName(name);
        resident.getName();

        cout << "Please enter your full address: " << endl;
        getline(cin, address);
        resident.setAddress(address);
        resident.getAddress();

        cout << "Please enter your email: " << endl;
        getline(cin, email);
            //validate whether or not the email contains an @ AND a . if it does not then keep asking
            while((resident.setEmail(email) == false)){
                cout << "Invalid email. Please enter again: " << endl;
                getline(cin, email);
            }
        resident.getEmail();

        cout << "Please enter your CUID (C########): " << endl;
        getline(cin, cuid);
        resident.setCUID(cuid);
        resident.getCUID();

        cout << "Please enter your undergraduate level (Freshman, Sophomore, Junior, Senior): " << endl;
        getline(cin, level);
        resident.setLevel(level);
        while(!(resident.setLevel(level))){
                    cout << "Invalid level. Please enter again: " << endl;
                    getline(cin, level);
                }
        resident.getLevel();
        //discount condition--if the user has senior status then they get $10 off
        if(resident.getLevel() == "Senior"){
            dis = 10;
            invoice.setDiscount(dis);
            invoice.getDiscount();
        }
    }

    //If the user is an employee at the university
    else if(classStatus == "Employee"){
        cout << "Please enter your full name: " << endl;
        getline(cin, name);
        employee.setName(name);
        employee.getName();

        cout << "Please enter your full address: " << endl;
        getline(cin, address);
        employee.setAddress(address);
        employee.getAddress();

        cout << "Please enter your email: " << endl;
        getline(cin, email);
            while((employee.setEmail(email) == false)){
                cout << "Invalid email. Please enter again: " << endl;
                getline(cin, email);
            }
        employee.getEmail();

        cout << "Please enter your respective department: " << endl;
        getline(cin, department);
        employee.setDepartment(department);
        employee.getDepartment();

        cout << "Are you tenured? (Yes/No): " << endl;
        getline(cin, tenure);
        //Validates whether the user is tenure or not by llimiting it to a yes and not answer -- case sensitive 
        while((employee.setTenure(tenure) == false)){
                cout << "Invalid response. Please enter again: " << endl;
                getline(cin, tenure);
            }
        employee.setTenure(tenure);
        employee.getTenure();
        //Discount condition -- if the user is tenure then they 
        if(employee.getTenure() == "Yes"){
            dis = 50;
            invoice.setDiscount(dis);
            invoice.getDiscount();
        }
        
    }

    //If the user is a visitor
    else if(classStatus == "Visitor"){
        cout << "Please enter your full name: " << endl;
        getline(cin, name);
        visitor.setName(name);
        visitor.getName();

        cout << "Please enter your full address: " << endl;
        getline(cin, address);
        visitor.setAddress(address);
        visitor.getAddress();

        cout << "Please enter your email: " << endl;
        getline(cin, email);
            while((visitor.setEmail(email) == false)){
                cout << "Invalid email. Please enter again: " << endl;
                getline(cin, email);
            }
        visitor.getEmail();
        
        cout << "Please explain your reason for your visit (max 200 characters): " << endl;
        getline(cin, reason);
        visitor.setReason(reason);
        visitor.getReason();

        cout << "Enter which state you are visiting from (AL/SC/PA): " << endl;
        getline(cin, state);
        //Confirm it is one of the 50 states
        while((visitor.setState(state) == false)){
                cout << "Invalid state. Please enter again: " << endl;
                getline(cin, state);
            }
        visitor.setState(state);
        visitor.getState();
        //Discount condition -- if the visitor is from South Carolina, then they get $20 off
        if(visitor.getState() == "SC"){
            dis = 20;
            invoice.setDiscount(dis);
            invoice.getDiscount();
        }
    }

    //If the user does not choose from the predefined permit pass classes, then terminate the program
    else{
        cout << "Invalid input. Bye bye!" << endl;
        return 0;
    }

//Conditions for printing variable specific menues
if(classEntry == "Car" && classStatus == "Resident"){
    int cost = 200;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.dPrintInvoice(car, resident);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);

}
else if(classEntry == "Car" && classStatus == "Employee"){
    int cost = 150;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.ePrintInvoice(car, employee);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Car" && classStatus == "Visitor"){
    int cost = 50;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.fPrintInvoice(car, visitor);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Motorcycle" && classStatus == "Resident"){
    int cost = 75;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.gPrintInvoice(motorcycle, resident);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Motorcycle" && classStatus == "Employee"){
    int cost = 50;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.iPrintInvoice(motorcycle, employee);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Motorcycle" && classStatus == "Visitor"){
    int cost = 25;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.hPrintInvoice(motorcycle, visitor);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Truck" && classStatus == "Resident"){
    int cost = 275;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.aPrintInvoice(truck, resident);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Truck" && classStatus == "Employee"){
    int cost = 250;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.bPrintInvoice(truck, employee);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}
else if(classEntry == "Truck" && classStatus == "Visitor"){
    int cost = 100;
    invoice.setPermit(cost);
    invoice.getPermit();
    invoice.cPrintInvoice(truck, visitor);
    invoice.calcTotal(cost, serviceFee, dis);
    total = invoice.calcTotal(cost, serviceFee, dis);
    invoice.printOutputTotal(total);
}

    return 0;
}