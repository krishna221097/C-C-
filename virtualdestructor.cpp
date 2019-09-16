#include<iostream>

using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Constructor base\n";
		}
		virtual ~base()
		{
			cout<<"Destructing base\n";
//wont get called if not declared virtual
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"Constructor derived\n";
		}
		~derived()
		{
			cout<<"Destructing derived\n";
		}
};
int main(void)
{
	derived *d=new derived();
	base *b=d;
	delete b;
	
	return 0;
}
