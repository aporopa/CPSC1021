#include "Vehicle.h"
#include <string>

using namespace std;

//Car constructor
Car::Car(string m, string d, int y, int s, string p){
    make = m;
    model = d;
    year = y;
    seats = s;
    plate = p;
}
//getter funcitons for car class
string Car::getMake(){
    return make;
}
string Car::getModel(){
    return model;
}
int Car::getYear(){
    return year;
}
int Car::getSeats(){
    return seats;
}
string Car::getPlate(){
    return plate;
}

//setter functions for car class
void Car::setMake(string makeS){
    make = makeS;
}
void Car::setModel(string modelS){
    model = modelS;
}
bool Car::setYear(int yearS){
    bool validate = false;

    if(yearS >= 1769 && yearS <= 2023){ //oldest and newest possible make of Car
        year = yearS;
        validate = true;
    }

    return validate;
}
void Car::setSeats(int seatS){
    seats = seatS;
}
void Car::setPlate(string plateS){
    plate = plateS;
}

//Motorcycle class constructor definition
Motorcycle::Motorcycle(string m, string d, int y, string t, string v){
    make = m;
    model = d;
    year = y;
    type = t;
    vin = v;
}

//getter functions for the motorcycle class
string Motorcycle::getMake(){
    return make;
}
string Motorcycle::getModel(){
    return model;
}
int Motorcycle::getYear(){
    return year;
}
string Motorcycle::getType(){
    return type;
}
string Motorcycle::getVin(){
    return vin;
}

//setter functions for the motor cycle class
void Motorcycle::setMake(string makeS){
    make = makeS;
}
void Motorcycle::setModel(string modelS){
    model = modelS;
}
bool Motorcycle::setYear(int yearS){
    bool validate = false;

    if(yearS >= 1769 && yearS <= 2023){ //oldest and newest possible make of Car
        year = yearS;
        validate = true;
    }

    return validate;
}
bool Motorcycle::setType(string typeS){
    bool validate = false;

    if(typeS == "Road Bike" || typeS == "Moped" || typeS == "Dirt Bike"){ //limits users choice 
        type = typeS;
        validate = true;
    }

    return validate;
}
void Motorcycle::setVin(string vinS){
    vin = vinS;
}

//Truck class -- constructor definition
Truck::Truck(string m, string d, int y, string c, string b){
    make = m;
    model = d;
    year = y;
    color = c;
    body = b;
}

//getter functions for truck class
string Truck::getMake(){
    return make;
}
string Truck::getModel(){
    return model;
}
int Truck::getYear(){
    return year;
}
string Truck::getColor(){
    return color;
}
string Truck::getBody(){
    return body;
}

//setter functions for the truck class
void Truck::setMake(string makeS){
    make = makeS;
}
void Truck::setModel(string modelS){
    model = modelS;
}
bool Truck::setYear(int yearS){
    bool validate = false;

    if(yearS >= 1769 && yearS <= 2023){ //oldest and newest possible make of Car
        year = yearS;
        validate = true;
    }

    return validate;
}
void Truck::setColor(string colorS){
    color = colorS;
}
void Truck::setBody(string bodyS){
    body = bodyS;
}