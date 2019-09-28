using namespace std;
#include<iostream>
int main()
{
	int num1,num2;
	cout<<"Enter 2 numbers";
	cin >>num1 >>num2;
	if(num1 == num2)
		cout<<"Two numbers are equal\n";
	if(num1 != num2)
		cout<<"Two numbers are not equal\n";
	if(num1 < num2)
		cout<<num1 <<" is less than " << num2 <<"\n";
	if(num1 > num2)
		cout<<num2 <<" is less than " << num1 <<"\n";
	if(num1 <= num2)
		cout<<num1 <<" is less than or equal to " << num2 <<"\n";
	if(num1 >= num2)
		cout<<num2 <<" is less than or equal to " << num1 <<"\n";
	return 0;

}
