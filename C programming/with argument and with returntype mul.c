#include<stdio.h>
#include<conio.h>
void fun1();
void mul(int x,int y);
void main()
{
	fun1();
}
	void fun1()
	{
		int a=2,b=3;
		mul(a,b); 
	}
	void mul(int x,int y)
	{
		int r;
		r=x*y;
		printf("%d",r);
		getch();
	}