#ifndef CAR_H_
#define CAR_H_

#include <string>

using namespace std;

class Car{

    private:
        string make;
        string model;
        string year;
        int 

    public:
        CarPhysical() = default; //default constructor
        CarPhysical(string m, string d, string y);
        
        //getter functions
        string getMake();
        string getModel();
        string getType();

        //setter function
        void setMakeCar(string);
        void setModel(string);
        void setType(string);
};

class Motorcycle{

    private:
        string make;
        string model;
        string year;

    public:
        Motorcycle() = default;
        Motorcycle(string m, string d, string y);

        //getter
        int getYear();
        string getLicense();
        int getFactory();

        //setter
        bool setYear(int);
        void setLicense(string);
        void setFactory(int);
};

class Truck{

    private:
        string make;
        string model;
        string year;

    public:
        Truck() = default;
        Truck(string m, string d, string y);

        //getter
        string getColor();
        string getState();
        char getInsured();

        //setter
        void setColor(string);
        void setState(string);
        void setInsured(char);

};

#endif