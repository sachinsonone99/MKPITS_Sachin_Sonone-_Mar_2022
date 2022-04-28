#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i;
printf("enter 5 number");
for(i=0;i<=4;i++)
{
	printf("a[%d]\n",i);
	scanf("%d",&a[i]);
}
for(i=4;i>=0;i--)
{
	printf("%d\n",a[i]);
}
getch();
}