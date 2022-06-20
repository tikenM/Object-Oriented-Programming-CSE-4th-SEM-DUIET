#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Array
{
    int *arr;
    int size;

    public:
    Array()
    {
        size = 0;
        arr = new int[0];
    }

    Array(int size_array)
    {
        size= size_array;
        arr = new int[size];
    }

    void operator=(Array &Arr)
    {
        
    }
    
friend std::ostream & operator<<(std::ostream & out, Array & arr)
{
    out<<"Element of Array : "<<endl;

    for(int i =0; i<arr.size;i++)
    {    
    out<< arr.arr[i]<<endl;
    }
       return out;
}

friend std::istream & operator >>(std::istream & in, Array &arr)

{
    cout<<"\n Enter "<<arr.size<<" of Integer "<<endl;
    for(int i=0;i<arr.size;i++)
    {
        in>>arr.arr[i];
        
    }
    return in;
}

int & operator[](int i)
{
    if (i>size)
        {
            cout<<"Array out of Bound "<<endl;
            return arr[0];
        }
    else
        return arr[i];
}

Array  operator++()
{
    for (int i=0;i<size;i++)
        arr[i]+=1;
    Array temp(size);
    for (int i=0;i<size;i++)
        temp.arr[i]=arr[i];
    
    return temp;

}



~Array()
{
    delete [] arr;
}

};

int main()
{

    Array a(4);
    Array b;
    cin>>a;
    cout<<a;
    a[2]=9;
    a[0]=100;
    a[1]=900;
    
    cout<<b;
}