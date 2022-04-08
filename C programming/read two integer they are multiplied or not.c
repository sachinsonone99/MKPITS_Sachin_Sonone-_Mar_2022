#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter first number:");
scanf("%d",&x);
printf("enter second numbe:");
scanf("%d",&y);

if(y%x==0)
{
	printf("multiplied\n");
}
else
{
	printf("not multiplied\n");
}
getch();
}