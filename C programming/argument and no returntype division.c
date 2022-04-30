#include<stdio.h>
#include<conio.h>
void div();
void fun1();
void main()
{
	fun1();
}
void fun1()
{
	int a=6,b=3;
	div(a,b);
}
void div(int x,int y)
{
int res;
res=x/y;
printf("div=%d",res);	
}