#include<stdio.h>
#include<conio.h>
void main()
{
	int x, i, ctr_even=0,ctr_odd=0, ctr_negative=0,ctr_positive=0;
	printf("enter 7 numbers:\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{
			ctr_positive++;
		}
		if(x<0)
		{
			ctr_negative++;
		}
		if(x%2==0)
		{
			ctr_even++;
		}
		if(x%2!=0)
		{
			ctr_odd++;
		}
	}
	printf("number of even value:%d\n",ctr_even);
	printf("number of odd value:%d\n",ctr_odd);
	printf("number of positive value:%d\n",ctr_positive);
	printf("number of negative value:%d\n",ctr_negative);
	getch();
}