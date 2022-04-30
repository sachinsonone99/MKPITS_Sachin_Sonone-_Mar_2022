#include<stdio.h>
#include<conio.h>
void div();
void main()
{
	div();
}
void div()
{
	int n1,n2,res;
	printf("enter any two number");
	scanf("%d %d",&n1,&n2);
	
	res=n1/n2;
	printf("div=%d",res);
	getch();
}