#include<iostream>
using namespace std;
int main()
{
	auto sum=[](auto a,auto b)
	{
		return a+b;
	};
	cout<<sum(5,6)<<endl;
	cout<<sum(6.0,7.9)<<endl;
	cout<<sum(string("Geeks "),string("For Geeks"))<<endl;
}
