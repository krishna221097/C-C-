using namespace std;
#include<iostream>
struct Time 
{
	int hour;
	int minute;
	int second;
};

void printMilitary(const Time &);
void printStandard(const Time &);

int main()
{
	Time dinnerTime;
	dinnerTime.hour=10;
	dinnerTime.minute=30;
	dinnerTime.second=0;
	
	cout<<"Dinner will be held at ";
	printMilitary(dinnerTime);
	cout<<" military time,\nwhich is ";
	//printStandard(dinnerTime);
	cout<<"Standard time.";
	
	dinnerTime.hour=29;
	dinnerTime.minute=73;

	cout<<"\nTime with invalid values : ";
	printMilitary(dinnerTime);
	cout<<endl;
	return 0;
}


void printMilitary(const Time &t)
{
	cout<<(t.hour<10 ?"0" :"")<<t.hour;
	cout<<(t.minute<10 ?"0" :"")<<t.minute;
}

/*void printStandard(const Time &t)
{
	cout<<((t.hour==0 ||t.hour==12) ?
		12:t.hour%12)
	    <<":"<<(t.minute<10 ?"0" :"")<<t.minute*/
	
	    
	
	
