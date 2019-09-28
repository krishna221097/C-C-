#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle class\n";
		}
};
class Fourwheeler: public Vehicle
{
	public:
		Fourwheeler()
		{
			cout<<"This is a Fourwheeler class\n";
		}
};
class Car: public Fourwheeler
{
	public:
		Car()
		{
			cout<<"This is a Car class\n";
		}
};
int main()
{
	Car obj1;
	return 0;
}
