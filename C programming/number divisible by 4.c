#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r;
	printf("enter number\n");
	scanf("%d",&num);
	
	r=num%4;
	if(r==0)
	{
		printf("number divisible by 4\n");
	}
	if(r!=0)
	{
		printf("number not divisible by 4\n");
	}
	getch();
}