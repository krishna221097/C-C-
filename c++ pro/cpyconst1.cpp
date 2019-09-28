#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
	Point(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	//copy constructor
	Point(const Point &p2)
	{
		x=p2.x;
		y=p2.y;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}

};
int main()
{
	Point p1(10,15);//Normal constructor is called
	Point p2=p1;//Copy constructor is called
	cout<<"p1.x= "<<p1.getx()<<" p1.y= "<<p1.gety();
	cout<<"p2.x= "<<p2.getx()<<" p2.y= "<<p2.gety();
	return 0;
}
