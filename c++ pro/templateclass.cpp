#include<iostream>
using namespace std;
template <typename t>
class Array
{
	private:
		t *ptr;
		int size;
	public:
		Array(t arr[],int s);
		void print();
};
template <typename t>
Array<t>::Array(t arr[],int s)
{
	ptr=new t[s];
	size=s;
	for(int i=0;i<size;i++)
	{
		ptr[i]=arr[i];
	}
}
template<typename t>
void Array<t>::print()
{
	for(int i=0;i<size;i++)
		cout<<"\t"<<*(ptr+i);
	cout<<endl;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	Array<int>a(arr,5);
	a.print();
	float arr1[2]={1.5,2.3};
	Array<float>b(arr1,2);
	b.print();
	char arr2[2]={'s','k'};
	Array<char>c(arr2,2);
	c.print();
}
