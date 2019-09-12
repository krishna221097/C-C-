using namespace std;
#include<iostream>

class Time
{
	public:
		Time();
		void setTime(int,int,int);
		void printMilitary();
		void printStandard();
	private:
		int hour;
		int minute;
		int second;
};

Time::Time()
{
	hour=minute=second=0;
}
void Time::setTime(int h,int m,ints)
{
	hour=(h>=0 && h<24)?h:0;
	minute=(m>=0 && m<60)?m:0;
	second=(s>=0 && s<60)?h:0;
}

void Time::printMilitary()
{
	cout<<(hour<10?"0":"")<<hour<<":";
	cout<<(minute<10?"0":"")<<minute;
}

void Time::printStandard()
{
	cout<<((hour==0 || hour==12)?12:hour%12);
	cout<<":"<<(minute<10?"0":"")<<minute;
	cout<<":"<<(second<10?"0":"")<<second;
	cout<<(hour<12?"AM" :"PM");	
}

void printMilitary(const Time &);
void printStandard(const Time &);

int main()
{
	Time t;
	
	t.setTime(12,25,56);
	cout<<"Dinner will be held at ";
	t.printMilitary();
	cout<<" military time,\nwhich is ";
	
	cout<<"Standard time.";
	
	t.hour=29;
	t.minute=73;

	cout<<"\nTime with invalid values : ";
	t.printMilitary();
	cout<<endl;
	return 0;
}


void printMilitary(const Time &t)
{
	cout<<(t.hour<10 ?"0" :"")<<t.hour;
	cout<<(t.minute<10 ?"0" :"")<<t.minute;
}

	
	    
	
	
