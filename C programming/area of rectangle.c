#include<stdio.h>
#include<conio.h >
void main()
{
float r,area,perimeter,pi=3.14;
printf("enter the area and perimeter of circle");
scanf("%f%f",&r,&perimeter);
perimeter=2*3.14*r;
printf("perimeter of circle=%f inches",perimeter);
area=3.14*r*r;
printf("area of circle=%f inches",area);
getch();
}