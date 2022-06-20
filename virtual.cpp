#include<iostream>

class A
{
    public:
    A()
    {
        std::cout<<"Bass Class A Constructor "<<std::endl;
    }

    int x;

    ~A()
    {
        std::cout<<"Bass Class A Destructor "<<std::endl;
    }
};

class B:virtual public A
{
    public:

 B()
    {
        std::cout<<"Bass Class B Constructor "<<std::endl;
    }
    ~B()
    {
        std::cout<<"Bass Class B Destructor "<<std::endl;
    }
};

class C: virtual public A
{
      public:
    
 C()
    {
        std::cout<<"Bass Class C Constructor "<<std::endl;
    }

    ~C()
    {
        std::cout<<"Bass Class C Destructor "<<std::endl;
    }

};

class D: public C, public B
{
      public:
    
 D()
    {
        std::cout<<"Bass Class D Constructor "<<std::endl;
    }

    ~D()
    {
        std::cout<<"Bass Class D Destructor "<<std::endl;
    }

};

int main()
{
    D obj;
    obj.x=10;

}
