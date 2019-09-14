#include<iostream>
using namespace std;
class cpy
{
	public:
		cpy(int =1,int =1,int =1990);
	
		void print();
	private:
		int month;
		int day;
		int year;
};
cpy::cpy(int m,int d,int y)
{
	month =m;
	day=d;
	year=y;
}
void cpy::print()
{
	cout<<day<<"-"<<month<<"-"<<year<<endl;
}
int main()
{
	cpy c1(7,8,1998),c2;
	cout<<"date1:";
	c1.print();
	cout<<"date2:";
	c2.print();
	c2=c1;
	cout<<"\nAfter default memberwise copy\n";
	c2.print();
	cout<<endl;
	return 0;
}
	
	
