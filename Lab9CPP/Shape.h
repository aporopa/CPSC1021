#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>

using namespace std;

template <typename Temp>

class Shape{

    private:
        string name{""};

    public:
        //Constructors
        Shape() = default;
        Shape(string name) : name(name) {};

        //virtual printing function
        virtual string printName() final{
            return name;
        }

        virtual Temp getArea() = 0;
};

#endif