#include<stdio.h>
#include<conio.h>
void fun1();
void cub(int x);
void main()
{
	fun1();
}
	void fun1()
	{
		int a=2;
		cub(a); 
	}
	void cub(int x)
	{
		int r;
		r=x*x*x;
		printf("%d",r);
		getch();
	}