#include<stdio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
void push(int n)
{
if(top==9)
printf("\nStack Full\n");
else
stack[++top]=n;
}
void pop()
{
if(top==-1)
printf("\nStack Empty\n");
else
top--;
}
void display()
{
int i;
if(top==-1)
printf("\nStack Empty\n");
else
{
for(i=top;i>=0;i--)
printf("%d ",stack[i]);
printf("\n");
}
}
void main()
{
int i,n;
while(1==1)
{
printf("Enter your Choice: 1)push 2)pop 3)display 4)exit : ");
scanf("%d",&i);
switch(i)
{	
case 1:
printf("Enter Data: ");
scanf("%d",&n);
push(n);
break;
case 2:
pop();
printf("\n");
break;
case 3:
display();
printf("\n");
break;
case 4:
exit(0);
default:
printf("Enter correct Choice\n");
}
}
}
