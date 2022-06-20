#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
private:
  string Name;
  string Company;
  int age;


public:

Employee() // Default Constructor
{


}

Employee(string name)
{
    Name = name;
    //Company = company;
   // age =ag;

}

Employee(string name, string company)
{
    Name = name;
    Company = company;
   // age =ag;

}
Employee(string name, string company, int ag)
{
    Name = name;
    Company = company;
     age =ag;

}
void IntroducedItSelf()
{
    std::cout<<"Name -- "<<&Name<<std::endl;
    std::cout<<"Company -- "<<&Company<<std::endl;
    std::cout<<"Age -- "<<&age<<std::endl;
}

string getName();


};


Employee::Employee()
{


}

string Employee::getName()
{
    return Name;
}


int main()
{

    Employee employee1("Tiken");//,"DU",38);
    Employee e2("test","DU");
    
    
    employee1.IntroducedItSelf();

    Employee employee2("John","Amazon",45);
    /*employee2.Name="John";
    employee2.Company="Amazon";
    employee2.age=45;*/
    employee2.IntroducedItSelf();

    cout<<"Object 1 Memory:  - "<<&employee1<<endl;
    cout<<"Object 2 Memory:  - "<<&employee2;
    return 0;
}