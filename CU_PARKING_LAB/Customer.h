#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>

using namespace std;

//Resident class 
class Resident{

    //private member variables
    private:
        string name;
        string address;
        string email;
        string cuid;
        string level;

    //public function declarations
    public:
        Resident() = default; //default constructor
        Resident(string n, string a, string e, string c, string l);

        //getter
        string getName();
        string getAddress();
        string getEmail();
        string getCUID();
        string getLevel();

        //setter
        void setName(string);
        void setAddress(string);
        bool setEmail(string);
        void setCUID(string);
        bool setLevel(string);

};

class Employee{

    //private member variables
    private:
        string name;
        string address;
        string email;
        string department;
        string tenure;

    //public function declarations
    public:
        Employee() = default; //default constructor
        Employee(string n, string a, string e, string d, string t);

        //getter
        string getName();
        string getAddress();
        string getEmail();
        string getDepartment();
        string getTenure();

        //setter
        void setName(string);
        void setAddress(string);
        bool setEmail(string);
        void setDepartment(string);
        bool setTenure(string);

};

class Visitor{
    
    //private member variables
    private:
        string name;
        string address;
        string email;
        string reason;
        string state;

    //public function declarations
    public:
        Visitor() = default; //default constructor
        Visitor(string n, string a, string e, string r, string s);

        //getter
        string getName();
        string getAddress();
        string getEmail();
        string getReason();
        string getState();

        //setter
        void setName(string);
        void setAddress(string);
        bool setEmail(string);
        void setReason(string);
        bool setState(string);

};

#endif