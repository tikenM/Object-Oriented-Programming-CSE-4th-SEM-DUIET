#include "Shape.h"

class Square: public Shape
{
    public:

    Square(float x_, float y_):Shape(x_,y_)
    {

    }

   float Area()
    {
        return x*y;
    }

};