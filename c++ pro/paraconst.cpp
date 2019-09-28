#include<iostream>
using namespace std;
class d
{
	private:
		int x,y;
	public:
		//parameterized Constructor
		d(int x1,int y1)
		{
			x=x1;		
			y=y1;
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
	d d1(10,15);
	cout<<"d1.x="<<d1.getx()<<"d2.y="<<d1.gety();
	return 0;
}
