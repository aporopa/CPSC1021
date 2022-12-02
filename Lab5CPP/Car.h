#ifndef CAR_H_
#define CAR_H_

#include <string>

using namespace std;

class CarPhysical{

    private:
        string makeCar;
        string model;
        string type;

    public:
        CarPhysical() = default; //default constructor
        CarPhysical(string m, string d, string t);
        
        //getter functions
        string getMake();
        string getModel();
        string getType();

        //setter function
        void setMakeCar(string);
        void setModel(string);
        void setType(string);
};

class CarDetails{

    private:
        int year;
        string license;
        int factory;

    public:
        CarDetails() = default;
        CarDetails(int y, string l, int f);

        //getter
        int getYear();
        string getLicense();
        int getFactory();

        //setter
        bool setYear(int);
        void setLicense(string);
        void setFactory(int);
};

class CarAttribute{

    private:
        string color;
        string state;
        char insured;

    public:
        CarAttribute() = default;
        CarAttribute(string c, string s, char i);

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