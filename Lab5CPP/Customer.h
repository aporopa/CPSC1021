#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>

using namespace std;

class Customer{

    private:
        char status;
        string permit;

    public:
        Customer() = default; //default constructor
        Customer(char s, string p); 

        //getter functions
        char getStatus();
        string getPermit();

        //setter functions
        bool setStatus(char);
        bool setPermit(string);


};

class Personal{

    private:
        string name;
        string address;
        string email;

    public:
        Personal() = default;
        Personal(string n, string a, string e);

        //getter
        string getName();
        string getAddress();
        string getEmail();

        //setter
        bool setEmail(string);
        void setAddress(string);
        void setName(string);

};

class Specifics{

    private:
        string origin; //where did they start driving
        int driving; //how long they've been driving (months)
        string duration; //how long they need the permit for

    public:
        Specifics() = default;
        Specifics(string o, int d, string l);

        //getter
        string getOrigin();
        int getDriving();
        string getDuration();

        //setter
        void setOrigin(string);
        void setDriving(int);
        bool setDuration(string);

};


#endif 