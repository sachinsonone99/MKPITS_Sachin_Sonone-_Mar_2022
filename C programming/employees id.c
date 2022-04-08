#include<stdio.h>
#include<conio.h>
void main()
{
char id[10];	
int hour;
float value,salary;
printf("enter the employees id:");
scanf("%s", id);
printf("enter working hour:");
scanf("%d",&hour);
printf("salary amount/hour:");
scanf("%f",&value);
salary=value*hour;
printf("employees id=%s,salary=%f",id,salary);
getch();
}
 