#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,c=0;
	printf("enter 5 number");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<=4;i++);
	{
	    c=c+a[i];
	}
	printf("addition:%d",c);
	getch();
}