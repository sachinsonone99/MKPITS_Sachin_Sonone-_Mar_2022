#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,temp,i,sum=0;
	
	printf("enter the first number\n");
	scanf("%d",&x);
	
	printf("enter second number\n");
	scanf("%d",&y);
	if(x>y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	for(i=i+1;i<y;i++)
	{
		if(i%7==2||i%7==3)
		{
		printf("%d\n",i);
	    }
	}
	
}