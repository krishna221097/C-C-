#include<iostream>
using namespace std;
#define PI 3.147
class shape
{
	int l,b;
	float r;
	public:
		shape(int l=1,int b=2,float r=2)
		{
			
		}
		void square(int l=2)
		{
			cout<<"Area of square ="<<l*l<<endl;
		}
		void rec(int l=8,int b=9)
		{
			cout<<"Area of rectangle ="<<l*b<<endl;
		}
		void circle(float r=8)
		{
			cout<<"Area of circle ="<<PI*r*r<<endl;
		}
};

int main()
{
	shape s;	
	s.square(5);
	s.rec(5,7);
	s.circle(8);
	return 0;
}
			
