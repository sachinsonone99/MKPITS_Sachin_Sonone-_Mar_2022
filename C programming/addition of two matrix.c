#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	int m1[2][2],m2[2][2],res[2][2];
	printf("enter 2*2 matrix m1");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=\n",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter 2*2 matrix m2");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=\n",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			res[i][j]=m1[i][j]+m2[i][j];
		}
	}
	//display
	for(i=0;i<=1;i++);
	{
		for(j=0;j<=1;j++)
		{
			printf("res[%d][%d]=%d",i,j,res[i][j]);
		}
		getch();
    }
}