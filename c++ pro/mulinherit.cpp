#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle class";
		}
};
class Fourwheeler
{
	public:
		Fourwheeler()
		{
			cout<<"This is a Fourwheeler class";
		}
};
class Car:public Vehicle,public Fourwheeler
{
	
};
int main()
{
	Car obj1;
	return 0;
}
