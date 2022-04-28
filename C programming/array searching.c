#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int a[5],ser;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number you want to search");
	scanf("%d",&ser);
	for(i=0;i<5;i++)
	{
		if  (a[i]==ser)
		{
			printf("present");
		}
	}
	getch();
}