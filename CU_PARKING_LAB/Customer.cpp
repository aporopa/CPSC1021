#include "Customer.h"
#include <string>
#include <iostream>

using namespace std;

//Resident constructor definition
Resident::Resident(string n, string a, string e, string c, string l){
    name = n;
    address = a;
    email = e;
    cuid = c;
    level = l;
}

//getter function definitions
string Resident::getName(){
    return name;
}
string Resident::getAddress(){
    return address;
}
string Resident::getEmail(){
    return email;
}
string Resident::getCUID(){
    return cuid;
}
string Resident::getLevel(){
    return level;
}

//setter function definitions
bool Resident::setLevel(string levelS){
    bool validate = false;
    
    if(levelS == "Freshman" || levelS == "Sophomore" || levelS == "Junior" || levelS == "Senior"){
        validate = true;
        level = levelS;
    }

    return validate;
}
bool Resident::setEmail(string emailS){
    bool validate = false;

    if ((emailS.find('@')!= std::string::npos) && (emailS.find('.') != std::string::npos)){
        validate = true;
        email = emailS;
    }

    return validate;
}
void Resident::setName(string nameS){
    name = nameS;
}
void Resident::setCUID(string cuidS){
    cuid = cuidS;
}
void Resident::setAddress(string addS){
    address = addS;
}

//Employee constructor definition
Employee::Employee(string n, string a, string e, string d, string t){
    name = n;
    address = a;
    email = e;
    department = d;
    tenure = t;
}

//getter function definitions
string Employee::getName(){
    return name;
}
string Employee::getAddress(){
    return address;
}
string Employee::getEmail(){
    return email;
}
string Employee::getDepartment(){
    return department;
}
string Employee::getTenure(){
    return tenure;
}

//setter function definitions
bool Employee::setEmail(string emailS){
    bool validate = false;

    if ((emailS.find('@')!= std::string::npos) && (emailS.find('.') != std::string::npos)){
        validate = true;
        email = emailS;
    }

    return validate;
}
void Employee::setName(string nameS){
    name = nameS;
}
void Employee::setAddress(string addS){
    address = addS;
}
void Employee::setDepartment(string deptS){
    department = deptS;
}
bool Employee::setTenure(string tenureS){
    bool validate = false;
    
    if(tenureS == "Yes" || tenureS == "No"){
        validate = true;
        tenure = tenureS;
    }

    return validate;
}

//Visitor constructor definitions 
Visitor::Visitor(string n, string a, string e, string r, string s){
    name = n;
    address = a;
    email = e;
    reason = r;
    state = s;
}

//getter function definitions
string Visitor::getName(){
    return name;
}
string Visitor::getAddress(){
    return address;
}
string Visitor::getEmail(){
    return email;
}
string Visitor::getReason(){
    return reason;
}
string Visitor::getState(){
    return state;
}

//setter functions definitions
bool Visitor::setEmail(string emailS){
    bool validate = false;

    if ((emailS.find('@')!= std::string::npos) && (emailS.find('.') != std::string::npos)){
        validate = true;
        email = emailS;
    }

    return validate;
}
void Visitor::setName(string nameS){
    name = nameS;
}
void Visitor::setAddress(string addS){
    address = addS;
}
void Visitor::setReason(string reasonS){
    reason = reasonS;
}
bool Visitor::setState(string stateS){
    bool validate = false;
    
    if(stateS == "AL" || stateS == "AK" || stateS == "AZ" || stateS == "AR" || stateS == "CA"|| stateS == "CO"|| stateS == "CT"|| stateS == "DE"|| stateS == "FL"|| stateS == "GA"|| stateS == "HI"|| stateS == "ID"|| stateS == "IL"|| stateS == "IN"|| stateS == "IA"|| stateS == "KS"|| stateS == "KY"|| stateS == "LA"|| stateS == "ME"|| stateS == "MD"|| stateS == "MA"|| stateS == "MI"|| stateS == "MN"|| stateS == "MS"|| stateS == "MO"|| stateS == "MT"|| stateS == "NE"|| stateS == "NV"|| stateS == "NH"|| stateS == "NJ"|| stateS == "NM"|| stateS == "NY"|| stateS == "NC"|| stateS == "ND"|| stateS == "OH"|| stateS == "OK"|| stateS == "OR"|| stateS == "PA"|| stateS == "RI"|| stateS == "SC"|| stateS == "SD"|| stateS == "TN"|| stateS == "TX"|| stateS == "UT"|| stateS == "VT"|| stateS == "VA"|| stateS == "WA"|| stateS == "WV"|| stateS == "WI"|| stateS == "WY"){
        validate = true;
        state = stateS;
    }

    return validate;
}

