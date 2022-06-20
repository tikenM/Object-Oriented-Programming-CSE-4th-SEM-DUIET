#include<iostream>

using namespace std;

class Int
{
    int a;

    public:
    Int()
    {
        a=rand();
    }

    Int(int x): a(x){}

    void operator+=(Int &intt)
    {
        a+=intt.a;
    

    }

    friend ostream & operator << (ostream &, const Int & INT);
    friend istream & operator >> (istream &, Int &INT);
};

ostream & operator << (ostream & out, const Int &INT)
{
    out<<INT.a;
    return out;
}

istream & operator >>(istream &in, Int &INT)
{
    in>>INT.a;
    return in;
}


int main()
{

    Int x=12;
    Int y=76;

    x+=y;
    
    cout<<x;

    cin.get();

    return 0;
}


