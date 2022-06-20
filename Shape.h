#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Shape
{
    protected:

    float x;
    float y;

    public:
     
    Shape()
    {
        x=0;
        y=0;
    }
    Shape(float x_, float y_=0)
    {
        x=x_;
        y=y_;
    }
    virtual void init(){};
    virtual float Area()=0;
};