#include<stdio.h>
#include<conio.h>
void main()
{
float x1,y1,x2,y2,gdistance;
printf("enter x1");
scanf("%f",&x1);
printf("enter y1");
scanf("%f",&y1);
printf("enter x2");
scanf("%f",&x2);
printf("enter y2");
scanf("%f",&y2);
gdistance=((x2-x1)*(x2-y1)*(y2-y1));
printf("distance between two points:%f",gdistance);
printf("\n");
getch();
}