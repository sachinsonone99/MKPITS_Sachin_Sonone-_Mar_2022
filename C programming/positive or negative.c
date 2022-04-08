#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
printf("enter number:");
scanf("%d",&num);
if(num>=0)
{
	printf("%d is positive\n",num);
}
else
{
	printf("%d is negative\n",num);
}
getch();
}