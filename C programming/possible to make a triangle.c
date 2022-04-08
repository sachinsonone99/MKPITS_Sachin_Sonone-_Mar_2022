#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,z,p;
printf("enter first number:");
scanf("%f",&x);
printf("enter second number:");
scanf("%f",&y);
printf("enter third number:");
scanf("%f",&z);
if(x<(y+z)&& y<(x+z)&& z<(y+x))
{
	p=x+y+z;
	printf("perimeter=%f\n",p);
}
else
{
	printf("not possible create a triangle");
}
getch();
}