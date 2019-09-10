#include<stdio.h>
int main()
{
	int i,j,r,c,a[3][3]={},x=0,p,count1=0,count2=0;
	while(x<9)
	{
		printf("enter 1st or 2nd player");
		scanf("%d",&p);
		if(p==1)
		{
			ran:
			printf("Enter p1 row");
			scanf("%d",&r);
			printf("Enter p1 column");
			scanf("%d",&c);
			if(!a[r][c])
			{
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						if(i==r && j==c)
						{
							a[i][j]='X';
							printf("%c\t",a[i][j]);
						}
						else
						printf("\t");	
					}
					printf("\n");
				}
		
				if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') )
				{
					printf("CONGRATUALATIONS !!  P1 WINS\n");
					goto end;
				}
			}
			else
			{
				printf("ERROR! Enter valid row and column\n");
				goto ran;
			}
		
		}
		else
		{
			sri:			
			printf("Enter p2 row");
			scanf("%d",&r);
			printf("Enter p2 column");
			scanf("%d",&c);
			if(!a[i][j])
			{
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						if(i==r && j==c)
						{
							a[i][j]='O';
							printf("%c\t",a[i][j]);
						}
						else
						printf("\t");	
					}
					printf("\n");
				}
				if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')|| (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') )
				{
					printf("CONGRATUALATIONS !! P2 WINS\n");
					goto end;
				}
			}
			else
			{
				printf("ERROR! Enter valid row and column\n");
				goto sri;
			}
				
		}
		
	x++;
	}
end:
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					
						printf("%c\t",a[i][j]);
						
				}
				printf("\n");
			}

return 0;
}
