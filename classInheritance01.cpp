#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Person
{
    protected:
    std::string name;
    std::string code;

    public:
    void init()
    {
        cout<<"\n Enter name of Person ";
        cin>>name;
        cout<<"\n Enter code: ";
        cin>>code;
    }

    void Display()
    {
        cout<<"\n Name : " <<name;
        cout<<"\n Code : "<<code;

    }

};

class Account: virtual public Person{
    protected:
    float pay;

public:
    void init()
    {
        cout<<"\n Pay : ";
        cin>>pay;
    }

    void Display()
    {
            cout<<"\n Pay :"<<pay;
    }

};

class Admin: virtual public Person
{
    protected:
    float exper;

    public:
     void init()
    {
        
        cout<<"\n Experience: ";
        cin>>exper;
    }

    void Display()
    {
        
        cout<<"\n Experience :"<<exper;
    }



};

class Employee: public Admin, public Account{

public:
public:
     void init()
    {
        Person::init();
        Admin::init();
        Account::init();
       
    }

    void Display()
    {
        Person::Display();
        Admin::Display();
        Account::Display();
    }

};

int main()
{

    /*Employee emp;
    emp.init();
    emp.Display();*/

    Person *pr = new Employee();
    pr->init();
    pr = new Account();
    pr->init();
    pr= new Admin();
    pr->init();

    return 0;
}