#include <iostream>
#include <string>

#include "Invoice.h"
#include "Customer.h"
#include "Car.h"

using namespace std;

int main(){

    //Customer class filled with user information
    Customer user;
    Personal personal;
    Specifics specs;
    string name, address, email, permit, origin, duration;
    char status;
    int driving;

    cout << "Please enter your full name: ";
    getline(cin, name);
    personal.setName(name);
    cout << personal.getName() << endl;

    cout << "Please enter your full address: ";
    getline(cin, address);
    personal.setAddress(address);
    cout << personal.getAddress() << endl;

    cout << "Please enter your email: ";
    getline(cin, email);
        while((personal.setEmail(email) == false)){
            cout << "Invalid email. Please enter again: ";
            getline(cin, email);
        }
    cout << personal.getEmail() << endl;


    cout << "Please enter your permit type: \n" << "   -Commuter\n"  << "   -Employee\n" << "   -Resident\n";
    getline(cin, permit);
        while(!(user.setPermit(permit))){
            cout << "Invalid permit. Please enter again: ";
            getline(cin, permit);
        }
    user.setPermit(permit);
    cout << user.getPermit() << endl;

    cout << "Please enter your univeristy status: \n" << "  -Teacher (t)\n" << "  -Student (s)\n" << "  -Employee (e)\n";
    cin >> status;
        while(!(user.setStatus(status))){
            cout << "Invalid status. Please enter again: ";
            cin >> status;
        }
    user.setStatus(status);
    cout << user.getStatus() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Please enter which state you recieved your license in (SC/AL/AK): ";
    getline(cin, origin);
    specs.setOrigin(origin);
    cout << specs.getOrigin() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Please enter how long you request your permit: \n" << "  -Annual\n" << "  -Semester\n" << "  -Daily\n" << "  -Hourly\n";
    getline(cin, duration);
        while(!(specs.setDuration(duration))){
            cout << "Invalid duration. Please enter again: ";
            getline(cin, duration);
        }
    specs.setDuration(duration);
    cout << specs.getDuration() << endl;
    
    cout << "Please enter how many years you've been driving (if less than one year, type 0): ";
    cin >> driving;
    specs.setDriving(driving);
    cout << specs.getDriving() << endl;


    //Car class with vehicle information
    CarPhysical vehicle;
    CarDetails details;
    CarAttribute attribute;
    string makeCar, model, license, type, color, state;
    char insured;
    int year, factory;
 

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Please enter the make of your car: ";
    getline(cin, makeCar);
    vehicle.setMakeCar(makeCar);
    cout << vehicle.getMake() << endl;

    cout << "Enter the model of your car: ";
    getline(cin, model);
    vehicle.setModel(model);
    cout << vehicle.getModel() << endl;

    cout << "Enter your license plate: ";
    getline(cin, license);
    details.setLicense(license);
    cout << details.getLicense() << endl;

    cout << "Enter your factory number: ";
    cin >> factory;
    details.setFactory(factory);
    cout << details.getFactory() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter the type of your car (Motorcycle, Car, Truck): ";
    getline(cin, type);
    vehicle.setType(type);
    cout << vehicle.getType() << endl;

    cout << "Enter the year your car was made: ";
    cin >> year;
        while(!(details.setYear(year))){
                cout << "Invalid year. Please enter again: ";
                cin >> year;
            }
    cout << details.getYear() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter the color of your car: ";
    getline(cin, color);
    attribute.setColor(color);
    cout << attribute.getColor() << endl;

    cout << "Please enter the state your car is registered in: ";
    getline(cin, state);
    attribute.setState(state);
    cout << attribute.getState() << endl;

    cout << "Are you insured (Y/N): ";
    cin >> insured;
    attribute.setInsured(insured);
    cout << attribute.getInsured() << endl;

    Invoice invoice;
    invoice.PrintInvoice();

    return 0;
}