#include<stdio.h>
#include<conio.h>
void main()
{
	int ch=65;
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
	
		printf("\n");
		getch();
	}
}