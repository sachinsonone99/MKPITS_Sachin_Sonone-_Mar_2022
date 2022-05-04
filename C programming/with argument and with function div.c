#include<stdio.h>
#include<conio.h>
void fun1();
void div(int x,int y);
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
		int r;
		r=x/y;
		printf("%d",r);
		getch();
	}