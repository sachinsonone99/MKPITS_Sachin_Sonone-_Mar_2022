#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
int a=2,b=3;
printf("a=%d b=%d",a,b);
fun(a,b);
}
void fun(int x,int y)
{
x=2;
y=3;	
}