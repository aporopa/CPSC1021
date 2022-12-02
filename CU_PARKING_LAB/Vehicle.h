#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <string>

using namespace std;

//Car class outline
class Car{

    //private class variables
    private:
        string make;
        string model;
        int year;
        int seats;
        string plate;

    //public functions
    public:
        Car() = default; //default constructor
        Car(string m, string d, int y, int s, string p);
        
        //getter
        string getMake();
        string getModel();
        int getYear();
        int getSeats();
        string getPlate();

        //setter
        void setMake(string);
        void setModel(string);
        bool setYear(int);
        void setSeats(int);
        void setPlate(string);

};

//Motorcycle class outline
class Motorcycle{

    //private class variables
    private:
        string make;
        string model;
        int year;
        string type;
        string vin;


    //public functions
    public:
        Motorcycle() = default;
        Motorcycle(string m, string d, int y, string t, string v);

        //getter
        string getMake();
        string getModel();
        int getYear();
        string getType();
        string getVin();

        //setter
        void setMake(string);
        void setModel(string);
        bool setYear(int);
        bool setType(string);
        void setVin(string);

};

//Truck class outline
class Truck{

    //private class variables
    private:
        string make;
        string model;
        int year;
        string color;
        string body; //4 or 2 door

    //public functions
    public:
        Truck() = default;
        Truck(string m, string d, int y, string c, string b);

        //getter
        string getMake();
        string getModel();
        int getYear();
        string getColor();
        string getBody();

        //setter
        void setMake(string);
        void setModel(string);
        bool setYear(int);
        void setColor(string);
        void setBody(string);


};

#endif