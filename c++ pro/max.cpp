#include<iostream>
using namespace std;
void maximum(int a,int b,int c)
{
	if(a>b && a>c)
		cout<<a<<" is the largest number\n";
	else if(b>a && b>c)
		cout<<b<<" is the largest number\n";
	else if(c>a && c>b)
		cout<<c<<" is the largest number\n";
}
int main()
{
	int a,b,c;
	cout<<"Enter the value of three numbers to find the largest number :";
	cin>>a>>b>>c;
	maximum(a,b,c);
	return 0;
}	
