#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rolldice();

int main()
{
enum status{cont,won,lost};
int sum,mypoint;
status gamestatus;
srand(time(0));
sum=rolldice();
switch(sum)
{
case 7:
case 11:
gamestatus=won;
break;
case 2:
case 3:
case 12:
gamestatus=lost;
break;
default:
gamestatus=cont;
mypoint=sum;
cout<<"Point is:"<<mypoint<<endl;
break;
}

while(gamestatus==cont)
{
sum=rolldice();
if(sum==mypoint)
gamestatus=won;
else if(sum==7)
gamestatus=lost;
}

if(gamestatus==won)
cout<<"player wins"<<endl;
else
cout<<"player losses"<<endl;

return 0;
}


int rolldice()
{

int die1,die2,worksum;
die1=1+rand()%6;
die2=1+rand()%6;
worksum=die1+die2;
cout<<"player rolled"<<die1<<"+"<<die2<<"="<<worksum<<endl;
return worksum;
}
