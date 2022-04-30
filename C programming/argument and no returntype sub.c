#include<stdio.h>
#include<conio.h>
void sub();
void fun1();
void main()
{
	fun1();
}
void fun1()
{
	int a=5,b=3;
	sub(a,b);
}
void sub(int x,int y)
{
int res;
res=x-y;
printf("sub=%d",res);	
}