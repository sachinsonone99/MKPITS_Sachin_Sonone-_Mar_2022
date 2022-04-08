#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r;
	printf("enter a number:");
	scanf("%d",&num);
	r=num%2;
	if(r==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	getch();
}