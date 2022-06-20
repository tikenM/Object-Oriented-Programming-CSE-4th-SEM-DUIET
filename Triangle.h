#include "Shape.h"

class Traingle: public Shape
{
    public:

    Traingle(float x_, float y_):Shape(x_,y_)
    {

    }

   float Area()
    {
        return 1.0/2.0 * x*y;
    }
};





