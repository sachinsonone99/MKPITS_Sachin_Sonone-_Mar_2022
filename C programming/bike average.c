#include<stdio.h>
#include<conio.h>
void main()
{
int x;
float y;
printf("enter total distance in km:");
scanf("%d",&x);
printf("enter total fuel spent in liter:");
scanf("%f",&y);
printf("average consumption(km/lt) %.3f",x/y);
printf("\n");
getch();
}