#include<stdio.h>
#include<conio.h>
void main()
{
float n1,n2,n3,n4,n5;
int num,pres=0, nres=0;
printf("enter first number:");
scanf("%f",&n1);

printf("enter second number:");
scanf("%f",&n2);

printf("enter third number:");
scanf("%f",&n3);

printf("enter fourth number:");
scanf("%f",&n4);

printf("enter fifth number:");
scanf("%f",&n5);
for(num=0;num<5;num++)
{
if(num>0)
{
	pres++;
}
else if(num<0)
{
	nres++;
}
}
printf("number of positive number: %d\n",pres);
printf("number of negative number: %d\n",nres);
printf("\n");
getch();
}