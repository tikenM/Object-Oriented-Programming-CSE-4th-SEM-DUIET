#include<iostream>
using std::cout;

class ClassA
{
public:
	int a;
};

class ClassB : virtual public ClassA
{
public:
	int b;
};

class ClassC : virtual public ClassA
{
public:
	int c;
};

class ClassD : public ClassB, public ClassC
{
public:
	int d;
};

int main()
{
	ClassD obj;

	obj.a = 10;	 // Statement 3
	obj.a = 100;	 // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << "\n a : " << obj.a;
	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d << '\n';
}
