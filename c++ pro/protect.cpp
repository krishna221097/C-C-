#include<iostream>
using namespace std;
class Parent
{
	protected:
		int id_protect;
};
class Child: public Parent
{
	public:
		void setId(int id)
		{
			id_protect=id;
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
