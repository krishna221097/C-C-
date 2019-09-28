#include<iostream>
using namespace std;

class Cricket
{
	private:
	static int runs;
	public :
		Cricket()
		{
			runs++;
		}
		void ipl(void)
		{
			cout<<"ipl called\n";
		}
		void icc(void)
		{
			cout<<"icc called\n";
		}
		void wc(void)
		{
			cout<<"wc called\n";
		}
		void odi(void)
		{
			cout<<"odi called\n";
		}
		static int totelobjects(void)
		{
			return runs;
		}
};
int Cricket::runs=0;

int main()
{
	Cricket C1;
	Cricket C2;
	Cricket C3;
	Cricket C4;
	Cricket C5;
	Cricket C6;
	Cricket C7;
	Cricket C8;
	C1.ipl();
	C2.ipl();
	C3.ipl();
	C4.icc();
	C5.icc();
	C6.wc();
	C7.wc();
	C8.odi();
	cout<<"Total objects created"<<Cricket::totelobjects()<<endl;
	return 0;
}

