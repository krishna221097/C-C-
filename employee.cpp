using namespace std;
#include<iostream>
class employee
{
	private:
		string name;
		string id;
		double sales;
		double salary;
	public:
		employee();
		void input(string,string,double,double);
		void  printfixed();
		void printincent();
};

employee :: employee()
{
	name="VIJAY";
	id="#0001";
	sales=1;
	salary=100.0;
}

void employee::input(string a,string b,double c,double d)
{
	name=a;
	id=b;
	sales=c;
	salary=d;
}

void employee::printfixed()
{
	double ctc;
	ctc=salary;
	cout<<"\n"<<ctc;
}

void employee::printincent()
{
	double hra,ctc;
	ctc=salary;
	hra=0.3*ctc;
	if(hra+salary>500000)
	{
		ctc=ctc+100000;
	}
	if(sales>2000000)
	{
		
		ctc=(0.1*sales)+ctc;
	}
	cout<<"\n"<<ctc;
}
int main()
{
	employee e;
	e.input("SRI","#0002",20000,400000);
	cout<<"The Fixed CTC is :";
	e.printfixed();
	cout<<endl;
	cout<<"The Incentive based ctc is :";
	e.printincent();
	cout<<endl;
	return 0;
}


