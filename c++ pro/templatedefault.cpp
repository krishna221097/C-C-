#include<iostream>
using namespace std;
template <class t, class u=char>
class A
{
	public:
		t x;
		u y;
		A()
		{
			cout<<"constructor called"<<endl;
		}
};
int main()
{
	A<char> a;
}

