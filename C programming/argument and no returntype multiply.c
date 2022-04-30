#include<stdio.h>
#include<conio.h>
void mul();
void fun1();
void main()
{
	fun1();
}
void fun1()
{
	int a=5,b=3;
	mul(a,b);
}
void mul(int x,int y)
{
int res;
res=x*y;
printf("mul=%d",res);	
}