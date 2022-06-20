#include<iostream>


template<typename T> 
void swap(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    char a= 'a';
    char  b ='b';
    std::cout<<"a = "<<a<< " b = "<<b<<std::endl;
    swap<char>(a,b);
    std::cout<<"a = "<<a<< " b = "<<b<<std::endl;

    return 0;
}