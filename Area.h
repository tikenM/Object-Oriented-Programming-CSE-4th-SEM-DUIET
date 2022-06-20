#include "Shape.h"


class Traingle: public Shape
{
    public:
    Traingle():Shape(){}
    Traingle(float x_, float y_):Shape(x_,y_) {  }
    float Area() {return 1.0/2.0 * x*y;  }
    void init()
    {
        cout<<"\n Enter Height of Triangle : "<<endl;
        cin>>x;
        cout<<"\n Enter Base of Triangle : "<<endl;
        cin>>y;
    }
};

class Square: public Shape
{
    public:
    Square():Shape(){ }
    Square(float x_, float y_):Shape(x_,y_){}
   float Area() { return x*y; }
   void init()
    {
        cout<<"\n Enter Length of Square : "<<endl;
        cin>>x;
        cout<<"\n Enter Breadth of Square : "<<endl;
        cin>>y;
    }

};

class Circle:public Shape
{
    public:
   Circle():Shape(){ }
   Circle(float x_, float y_=0):Shape(x_){}
   float Area() { return 3.14*x*x; }
   void init()
    {
        cout<<"\n Enter Radius of  Cicrle : "<<endl;
        cin>>x;
    }
};

