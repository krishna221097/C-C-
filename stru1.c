#include<stdio.h>
struct employee
{
	int age;
	char a[100];
	char *phno;
	float sal;
};
int main()
{
struct employee e;
	printf("Enter the employee name :");
	scanf("%s",e.a);
	printf("Enter the employee age :");
	scanf("%d",&e.age);
	printf("Enter the employee phno :");
	scanf("%s",e.phno);
	printf("Enter the employee salary :");
	scanf("%f",&e.sal);
	printf("Employee name   :%s\n",e.a);
	printf("Employee age    :%d\n",e.age);
	printf("Employee phno   :%s\n",e.phno);
	printf("Employee salary :%.2f\n",e.sal);
	return 0;
}
