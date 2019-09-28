#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
		virtual void fun()=0;
		int getx()
		{
			return x;
		}
};
class Derived: public Base
{
	int y;
	public:
		void fun()
		{
			cout<<"fun() called\n";
		}
};
int main(void)
{
	Derived d;
	d.fun();
	Base *b=new Derived();
	b->fun();
	//Base b; //error : cannot declare 'b' to abstract type
	//b.getx();	
}
