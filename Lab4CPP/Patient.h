#ifndef PATIENT_H_
#define PATIENT_H_

class Patient{

    //Private class variables
    private:

        //validation for every type of input
        bool validateInput(int);
        bool validateInput(double);
        bool validateInput(char);

        //Set default values
        char patientType = 'I';
        int days = 0;
        double rate = 0.0;
        double services = 0.0;
        double medication = 0.0;


    public:

        //Constructors
        Patient() = default;
        Patient(char p, double s, double m){
            patientType = p;
            services = s;
            medication = m;
        }
        Patient(char p, int d, double r, double s, double m){
            patientType = p;
            days = d;
            rate = r;
            services = s;
            medication = m;
        }

        //getter functions
        char getPatientType();
        int getDays();
        double getRate();
        double getServices();
        double getMedication();

        //setter functions
        void setDays(int);
        void setPatientType(char);
        void setRate(double);
        void setServices(double);
        void setMedication(double);

        //calculate total hospital bill function
        double calcTotalCharges();
};

#endif