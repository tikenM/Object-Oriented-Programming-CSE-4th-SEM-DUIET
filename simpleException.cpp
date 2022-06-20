#include<iostream>

int main()

{
    int a=0;
    int b=9;
  try
  {
    if (a==0)
        throw 101.0987;
    
    int c = b/a;
  }
  catch(const char *e )
  {
    std::cout<<e<<std::endl;
  }
  catch(int e)
  {
    std::cout<<e<<std::endl;
  }
  catch(...)
  {
    std::cerr <<" \nError" << '\n';
  }
  

    //int c = b/a;

    return 0;
}