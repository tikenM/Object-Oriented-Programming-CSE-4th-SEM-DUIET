#include<iostream>

using std::cout;

class A
{
    public:

    int x;
};

class B
{
    public:

    int x;
};

class c: public A,  public B
{

};

int main()
{
    c obj;
    obj.x=10;

}
