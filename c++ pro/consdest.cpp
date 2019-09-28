#include<iostream>
using namespace std;
static int a;
class con
{
	public:
		con()
		{
			cout<<a<<endl;
			a++;
		}
		~con()
		{
			cout<<a*a<<endl;
			a--;
		}
};

int main()
{
	con a[10];
	return 0;
}
