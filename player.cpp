#include<iostream>
using namespace std;
class player
{
	int runs,wicket;
	public:
		player(int r1,int w1)
		{
			runs=r1;
			wicket=w1;	
		}
		player(const player &p2)
		{
			runs=p2.runs;
		}
		int getruns()
		{
			return runs;
		}
		int getwicket()
		{
			return wicket;
		}
};

int main()
{
	player p1(100,3),p3(300,7);
	player p2=p1;
	cout<<"p1.getruns= "<<p1.getruns()<<" p1.getwicket= "<<p1.getwicket()<<endl;
	cout<<"p2.getruns= "<<p2.getruns()<<" p2.getwicket= "<<p2.getwicket()<<endl;
	cout<<"p3.getruns= "<<p3.getruns()<<" p3.getwicket= "<<p3.getwicket()<<endl;
	return 0;
}
