#include<iostream>
using namespace std;

int square(int x){ return x*x; }
double square(double x){ return x*x; }
int main()
{
	cout<<" The square of integer 7 is "<<square(7);
	cout<<" The square of double 7.5 is "<<square(7.5);
	cout<<endl;
	return 0;
}
