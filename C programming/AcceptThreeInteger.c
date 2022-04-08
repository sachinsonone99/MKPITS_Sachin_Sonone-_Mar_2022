#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,result,max;
printf("Enter the first integer: ");
scanf("%d",&x);	
printf("Enter the second integer: ");
scanf("%d",&y);
printf("Enter the third integer: ");
scanf("%d",&z);
result=(x+y+(x-y)/2);
max=(result+z+(result-z))/2;	
printf("Maximum value of these three integer is :  %d",max);
printf("\n");	
getch();			
}