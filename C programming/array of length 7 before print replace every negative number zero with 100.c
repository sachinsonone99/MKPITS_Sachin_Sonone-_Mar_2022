#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,x;
	printf("enter 5 number of an array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{
			a[i]=x;
		}
		else
		{
			a[i]=100;
		}
	}
	printf("array value are:\n");
	for(i=0;i<5;i++)
	{
		printf("[%d]=%d\n",i,a[i ]);
	}
	getch();
}