#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Car
{
   string Name;
   string EngineNumber;
   int Year;

   public:

   Car(string name, string engineNumber, int year)
   {
       this->Name = name;
       this->EngineNumber = engineNumber;
       this->Year = year;
   }

   string getName()
   {
       return Name;
   }

   void Display()
   {
       cout<<"Name of Car: " << Name<<endl;
       cout <<"Engine Number : "<<EngineNumber<<endl;
       cout<<"Year : "<<Year<<endl;
   }

};

class ElectricCar: Car
{
    float Charging;

    public:
    ElectricCar(string name, string engineNumber, int year,float charge):Car(name,engineNumber,year)
    {
       Charging = charge;
    }
    void eDisplay()
    {
       ;
        cout<<"Charging Level = "<<Charging<<endl;
    }
};

int main()
{
    ElectricCar ecar("BMW-X30000","6575ghdfvd6938",2021,78.90);
    ecar.eDisplay();



}

