#include <iostream>  
  
using namespace std;  
  
class Demo  
{  
    int a;  
    int b;  
    int *p;  
    public:  
    Demo()  
    {  
        p=new int;  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  

    Demo  IncrementOne()
    {
        Demo temp;
        temp.a=this->a+1;
        temp.b = this->b+1;
        *(temp.p) = *(this->p)+1;

        return temp;
        
    }

    Demo add(Demo obj1)
    {
        Demo temp;
         temp.a=a + obj1.a;
        temp.b = b + obj1.b;
        *(temp.p) = *p + *(obj1.p);

        return temp;


    }

   
};  
int main()  
{  
  Demo d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.setdata(12,34,76);
  cout<<"For object d2: \n"; 
  d2.showdata();
  cout<<"For object d1: \n";  
  d1.showdata();

  Demo d3;
  d3 = d1.add(d2);
  d3.showdata();

   return 0;  
}  