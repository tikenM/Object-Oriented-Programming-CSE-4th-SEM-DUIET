#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Car
{
    protected:
    string Name;
    string Bname;
    string EngineNumber;
    string ChesisNumber;
    int NumberofDoor;
    int Years_of_manufacturing;

    public:
    Car()
    {

    }
    Car(string name, string bname, string engineNumber,string chesisNumber,  int Numberofdoor, int yrs)
    {
        this->Name = name;
        this->Bname= bname;
        this->EngineNumber = engineNumber;
        this->ChesisNumber = chesisNumber;
        this->NumberofDoor = Numberofdoor;
        this->Years_of_manufacturing = yrs;
        
    }

    string getName()
    {
        return this->Name;
    }
    string getBname()
    {
        return this->Bname;
    }
    string getEngineNumber()
    {
        return this->EngineNumber;
    }

    void initName()
    {
        cout<<" Base Class Function : ";
        cout<<"\n Enter the name of car : ";
        cin>>this->Name;
    }
};

class ElectricCar : public Car
{
    int NumberofDoor;
    float batterylevel;
    public:
    ElectricCar(): Car()
    {
        this->batterylevel=0;
    }

    void initName()
    {
        cout<<" Derive Class Function : ";
        cout<<"\n Enter the name of car : ";
        cin>>this->Name;
        cout<<"\n Enter Battery Level : ";
        cin>>this->batterylevel;
    }

    void initNumberofDoor()
    {
        cout<<"\n Enther number of Door : ";
        cin>>Car::NumberofDoor;
    }


    
};

class ConventionalCar: Car
{
    float tank;

};

int main()
{
    ElectricCar ecar;


    ecar.getBname();
    ecar.initName();

    Car *cr = &ecar;
    cr->initName();





}
