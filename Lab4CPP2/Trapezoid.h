#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid{
    private:
        double base {1.0};
        double top {1.0};
        double height {1.0};

    public:
        Trapezoid() = default;
        Trapezoid(double bas, double to, double hi);

        double getBase1();
        double getBase2();
        double getHeight();
        bool setBase1(double bas);
        bool setBase2(double to);
        bool setHeight(double hi);
        double calcArea();
};

#endif