#include<stdio.h>
#include<conio.h>
void mul();
void main()
{
	mul();
}
void mul()
{
	int n1,n2,res;
	printf("enter any two number");
	scanf("%d %d",&n1,&n2);
	
	res=n1*n2;
	printf("mul=%d",res);
	getch();
}