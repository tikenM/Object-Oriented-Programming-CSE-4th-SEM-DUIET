#include<iostream>

class foo
{
    private:
      static int count;  // only one data item for all objects
      int x;
    public:
       foo():x(0)
       {
           count++;
       }

    int getcount(){return count;}

    static void display()
    {
            std::cout<<" From Static Function : "<<count<<std::endl;;
    }
};

int foo::count=0;

int main()
{
    foo f1, f2, f3;  //create three object

    std::cout<<"count is "<<f1.getcount()<<std::endl;  //each object;
    std::cout<<"count is "<<f2.getcount()<<std::endl;  //each object;
    std::cout<<"count is "<<f3.getcount()<<std::endl;  //each object;
    foo::display();

    return 0;
}