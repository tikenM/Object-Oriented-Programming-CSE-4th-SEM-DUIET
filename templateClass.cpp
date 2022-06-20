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
             {
                cout<<"Stack is Full"<<endl;
                
             }
             else
             {
                cout<<data<<" is inserted in Stack "<<endl;
                _top++;
                mem[_top]= data;
                
             }
        
     }
     T Pop()
     {
        if (_top<0)
        {
           cout<<"Empty Stack"<<endl;
           return 9999999;
        }
        else
            return mem[_top--];
     }

};

int main()
{
    Stack <int> stck(4);
    stck.Push(5);
    stck.Push(4);
    stck.Push(3);
    stck.Push(2);
    stck.Push(1);

    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;
    cout<<"Pop : "<<stck.Pop()<<endl;


    return 0;

}