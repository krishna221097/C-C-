using namespace std;
#include<iostream>
void minimum(int a,int b,int c)
{
	 int min=a < b ? (a < c ? a : c) : (b < c ? b : c) ;
	 cout<<min<<" is the smallest number";
}
int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers to find min";
	cin>>a>>b>>c;
	minimum(a,b,c);
	return 0;
}
