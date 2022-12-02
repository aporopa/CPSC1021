
//This lab gives the user the opportunity to calculate their hospital bill based on their duration of stay
//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 09/30/2022
//Time: 30 hours

#include "Patient.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //declaration of variables
    Patient user;
    char userInput;
    double days;
    double rate;
    double service;
    double medication;

    //Inform user of the program purpose and prompt for I/O
    cout << "This program will calculate a patient's hospital charges.\n";

    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> userInput;

    user.setPatientType(userInput);

    cout << user.getPatientType() << endl;

        //If the user was inpatient
        if(user.getPatientType() == 'i' || user.getPatientType() == 'I')
        {
            //Prompt user for number of days in the hospital...validated
            cout << "Number of days in the hospital: " << endl;
            cin >> days;
            
            user.setDays(days);
            
            //Prompt user for daily room rate and validate
            cout << "Daily room rate ($): ";
            cin >> rate;

            user.setRate(rate);
            cout << user.getRate() << fixed << setprecision(2) << endl;

            //Prompt user for lab fees and other service charges and validate
            cout << "Lab fees and other service charges ($): ";
            cin >> service;

            user.setServices(service);
            cout << user.getServices() << fixed << setprecision(2) << endl;

            //Prompt the user for medication charges
            cout << "Medication charges ($): ";
            cin >> medication;

            user.setMedication(medication);
            cout << user.getMedication() << fixed << setprecision(2) << endl;

            //Calculate total hospital charges through the function
            cout << "Your total hospital bills is ";
            cout << "$" << user.calcTotalCharges() << fixed << setprecision(2) << endl;
        }

        //Option for outpatient 
        else if(user.getPatientType() == 'o' || user.getPatientType() == 'O')
        {

            //Prompt user for lab fees and other service and validate
            user.setServices(service);
            cout << user.getServices() << fixed << setprecision(2) << endl;

            //Prompt user for medication charges
            cout << "Medication charges ($): ";
            cin >> medication;

            user.setMedication(medication);
            cout << user.getMedication() << fixed << setprecision(2) << endl;

            //Calculate total hospital charges through the function
            cout << "Your total hospital bills is ";
            cout << "$" << user.calcTotalCharges() << fixed << setprecision(2) << endl;
        }

    return 0;
}
