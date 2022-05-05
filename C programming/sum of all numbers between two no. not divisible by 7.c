#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,sum=0,temp=0;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	
	if(b<a)
	{
		temp=a;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++)
   	{
   		if(i%7!=0)
   		{
   			sum +=i;
		}
	}
	printf("sum of all numbers between said numbers not divisible by 7:\n");
	printf("%d\n",sum);
	getch();

	
}