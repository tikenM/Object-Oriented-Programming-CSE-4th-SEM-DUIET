#include<iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>
class Stack
{
    T *arr;
    int _size;
    int _top;

    public:
    Stack(int size)
    {
        _size= size;
        _top=-1;
        arr = new T[_size];
    }

    void Push(T data)
    {
        //stack is full?
        if(_top>=_size-1)
          throw " Stack is Full";
        _top++;
        arr[_top] = data;
        cout<<" Add to Stack: "<<data<<endl;
    }

    T Pop()
    {
        if (_top<0)
         throw "Stack is Empty";
        
        return arr[_top--];

    }

};

class RandomClass
{
    int rand_a;

    public:
    RandomClass()
    {
        rand_a=0;
    }

};

int main()
{
    Stack <int> stk(3);
    Stack <char> stkc(10);
    Stack <float> stkf (20);
    Stack <RandomClass> stkobject(20);

    try
    {
       stk.Push(5);
       stk.Push(4);
       stk.Push(3);
       stk.Push(2);
    }
    catch(const char * e)
    {
        std::cerr << e << '\n';
    }

    try
    {
        cout<<"Pop : "<<stk.Pop()<<endl;
        cout<<"Pop : "<<stk.Pop()<<endl;
        cout<<"Pop : "<<stk.Pop()<<endl;
        cout<<"Pop : "<<stk.Pop()<<endl;
        cout<<"Pop : "<<stk.Pop()<<endl;

    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    
    

    return 0;
}