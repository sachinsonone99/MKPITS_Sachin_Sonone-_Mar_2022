#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter n number");
scanf("%d",&n);
int size=2*n-1;
int start=0;
int end=size-1;
int a[size][size];
while(n!=0)
{
	for(i=start;i<=end;i++)
{
	for(j=start;j<=end;j++)
	{
		if(i==start||i==end||j==start||j==end)
		a[i][j];
	}
}
start++;
end--;
n--;
printf("%d",a);
}
getch();
}