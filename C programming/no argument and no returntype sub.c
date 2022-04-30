#include<stdio.h>
#include<conio.h>
void sub();
void main()
{
	sub();
}
void sub()
{
	int n1,n2,res;
	printf("enter any two number");
	scanf("%d %d",&n1,&n2);
	
	res=n1-n2;
	printf("sub=%d",res);
	getch();
}