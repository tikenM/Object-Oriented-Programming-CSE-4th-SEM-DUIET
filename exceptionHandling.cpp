#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

template <class T>
class Stack
{
    T *mem;
    int _size;
    int _top;
public:
     Stack(int size)
       {
        _size=size;
        mem= new T[size];
        _top=-1;
     }

     void Push(T data)
     {
        if (_top>=_size-1)
          throw "Stack is Full";
             
        cout<<data<<" is inserted in Stack "<<endl;
        _top++;
        mem[_top]= data;
                
            
        
     }
     T Pop()
     {
        if (_top<0)
        throw 456.778;

        return mem[_top--];
     }

};

int main()
{
    Stack <int> stck(4);
    try
    {
    stck.Push(5);
    stck.Push(4);
    stck.Push(3);
    stck.Push(2);
    stck.Push(1);
    }
    catch(const char * exception)
    {
        std::cerr<<exception<<'\n';
    }
    
  
try{
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
}
catch(const char *exception)
{
    std::cerr<< exception<<'\n';

}
catch(int errorCode)
{
    std::cerr<< "Exception with Code "<<errorCode <<'\n';

}
catch(...)
{
    std::cerr<<"Unknown Exception"<<'\n';

}



    return 0;

}