#include<stdio.h>
#include<conio.h>
void fun1();
void sqr(int x);
void main()
{
	fun1();
}
	void fun1()
	{
		int a=2,b=3;
		sqr(a); 
	}
	void sqr(int x)
	{
		int r;
		r=x*x;
		printf("%d",r);
		getch();
	}