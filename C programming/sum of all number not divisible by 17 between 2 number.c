#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,temp,i,sum=0;
	printf("enter first number:\n");
	scanf("%d",&x);
	
	printf("enter second number:\n");
	scanf("%d",&y);
	if(x>y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	for(i=x;i<=y;i++)
	{
		if((i%17)!=0)
		{
			sum+=i;
		}
	}
	printf("sum:%d",sum);
	getch();
}