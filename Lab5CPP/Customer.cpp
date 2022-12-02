#include "Customer.h"
#include <string>
#include <iostream>

using namespace std;

Customer::Customer(char s, string p){
    status = s;
    permit = p;
    
}

char Customer::getStatus(){
    return status;
}
string Customer::getPermit(){
    return permit;
}
bool Customer::setStatus(char statusSet){
    bool validate = false;
    
    if(statusSet == 't' || statusSet == 's' || statusSet == 'e'){
        validate = true;
        status = statusSet;
    }

    return validate;
}

bool Customer::setPermit(string permitSet){
    bool validate = false;

    if(permitSet == "Commuter" || permitSet == "Employee" || permitSet == "Resident"){
        permit = permitSet;
        validate = true;
    }

    return validate;
}




Personal::Personal(string n, string a, string e){
    name = n;
    address = a;
    email = e;
}

string Personal::getName(){
    return name;
}
string Personal::getAddress(){
    return address;
}
string Personal::getEmail(){
    return email;
}

void Personal::setAddress(string addressSet){
    address = addressSet;
}

void Personal::setName(string nameSet){
    name = nameSet;
}

bool Personal::setEmail(string emailSet){
    bool validate = false;

    if ((emailSet.find('@')!= std::string::npos) && (emailSet.find('.') != std::string::npos)){
        validate = true;
        email = emailSet;
    }

    return validate;
}

Specifics::Specifics(string o, int d, string l){
    origin = o;
    driving = d;
    duration = l;
}


string Specifics::getOrigin(){
    return origin;
}

int Specifics::getDriving(){
    return driving;
}

string Specifics::getDuration(){
    return duration;
}


void Specifics::setOrigin(string originSet){
    origin = originSet;
}

void Specifics::setDriving(int drivingSet){
    driving = drivingSet;
}

bool Specifics::setDuration(string durationSet){
    bool validate = false;

    if(durationSet == "Annual" || durationSet == "Semester" || durationSet == "Daily" || durationSet == "Hourly"){
        duration = durationSet;
        validate = true;
    }

        return validate;
}

//enter this new class in main

