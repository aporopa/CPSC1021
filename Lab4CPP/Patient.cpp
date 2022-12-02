#include "Patient.h"

//validate user input functions 
bool Patient::validateInput(int num){
    bool validate = true;

    if(num >= 0){
        validate = num;
    }
    else{
        validate = false;
    }

    return validate;

}

bool Patient::validateInput(double num2){
    bool validate = true;

    if(num2 >= 0.0){
        validate = num2;
    }
    else{
        validate = false;
    }

    return validate;
}

bool Patient::validateInput(char letter){
    bool validate = true;

    if(letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o'){
        validate = letter;
    }
    else{
        validate = false;
    }

    return validate;
}

//getter functions returning their respective values
char Patient::getPatientType(){
    return patientType;
}

int Patient::getDays(){
    return days;
}

double Patient::getRate(){
    return rate;
}

double Patient::getServices(){
    return services;
}

double Patient::getMedication(){
    return medication;
}

//setter functions calling the validate functions
void Patient::setPatientType(char userInput){
    if(validateInput(userInput))
        patientType = userInput;
}

void Patient::setDays(int d){
    if(validateInput(d))
        days = d;
}

void Patient::setRate(double r){
    if(validateInput(r))
        rate = r;
}

void Patient::setServices(double s){
    if(validateInput(s))
        services = s;
}

void Patient::setMedication(double m){
    if(validateInput(m))
        medication = m;
}

//calculate total hospital bill function
double Patient::calcTotalCharges(){
    double total;
    if(patientType == 'O' || patientType == 'o')
        total = services + medication;
    else if(patientType == 'I' || patientType == 'i'){
        total = (days * rate) + services + medication;
    }

    return total;
}