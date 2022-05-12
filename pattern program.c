#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
	for(i=8;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
	
}