#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],i;
	printf("enter 3 number");
	
	for(i=0;i<=2;i++)
	{
		printf("a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}