#include "Area.h"

int main()
{
    char choice;
    Shape *sp;
    
    while(1)
    {
    cout<<"\n\t Enter \"t\" for Traingle : "<<endl;
    cout<<"\n\t Enter \"s\" for Square : "<<endl;
    cout<<"\n\t Enter \"c\" for Circle : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 't':
             sp = new Traingle();
             break;
    case 's':
            sp= new Square();
            break;
    case 'c':
            sp = new Circle();
            break;
    
    default:
        break;
    }
    sp->init();
    cout<<"\n Area of the Shape :  = " << sp->Area()<<endl;
    
    }

    return 0;

}