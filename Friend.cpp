#include <iostream>
using namespace std;

class EquilateralTraingle {
    float a;
    float circumference;
    float area;
     
    public:
    void setA(float length)
    {
        a = length;
        circumference = 3*a;
        area = (1.73 *a*a)/4;
    }

friend void Display(EquilateralTraingle);

    
};


void Display(EquilateralTraingle eq) 
{
    cout<<"Circumference of Traingle : = "<<eq.circumference<<endl;
    cout<<"Area of Traingle : "<< eq.area<<endl;

}



int main()
{

    EquilateralTraingle et;
    et.setA(4);

    Display(et);

    //cout<<"Circumference of Traingle : = "<<et.circumference<<endl;
    //cout<<"Area of Traingle : "<< et.area<<endl;

    return 0;
}



