using namespace std;
#include<iostream>
void maximum(int a,int b,int c)
{
	 int max=a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	 cout<<max<<" is the largest number";
}
int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers to find max";
	cin>>a>>b>>c;
	maximum(a,b,c);
	return 0;
}
