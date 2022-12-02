#include "Car.h"
#include <string>

using namespace std;

//Car physical class
CarPhysical::CarPhysical(string m, string d, string t){
    makeCar = m;
    model = d;
    type = t;
}

string CarPhysical::getMake(){
    return makeCar;
}

string CarPhysical::getModel(){
    return model;
}

string CarPhysical::getType(){
    return type;
}
void CarPhysical::setMakeCar(string makeSet){
    makeCar = makeSet;
}

void CarPhysical::setModel(string modelSet){
    model = modelSet;
}


void CarPhysical::setType(string typeSet){
    type = typeSet;
}


//Car details class
CarDetails::CarDetails(int y, string l, int f){
    year = y;
    license = l;
    factory = f;
}

int CarDetails::getYear(){
    return year;
}

int CarDetails::getFactory(){
    return factory;
}

string CarDetails::getLicense(){
    return license;
}

void CarDetails::setLicense(string licenseSet){
    license = licenseSet;
}

void CarDetails::setFactory(int factorySet){
    factory = factorySet;
}

bool CarDetails::setYear(int yearSet){
    bool validate = false;

    if(yearSet >= 1769 && yearSet <= 2023){ //oldest and newest possible make of CarPhysical
        year = yearSet;
        validate = true;
    }

    return validate;
}

//Car attribute class
CarAttribute::CarAttribute(string c, string s, char i){
    color = c;
    state = s;
    insured = i;
}

string CarAttribute::getColor(){
    return color;
}
string CarAttribute::getState(){
    return state;
}
char CarAttribute::getInsured(){
    return insured;
}

void CarAttribute::setColor(string colorSet){
    color = colorSet;
}
void CarAttribute::setState(string stateSet){
    state = stateSet;
}
void CarAttribute::setInsured(char insuredSet){
    insured = insuredSet;
}