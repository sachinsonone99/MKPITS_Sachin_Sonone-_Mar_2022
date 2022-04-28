#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,a[5];
	int even_count=0,odd_count=0;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("ente array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
 for(i=0;i<size;i++)
    {
    	if(a[i]%2==0)
		{
		even_count++;	
        }
		else
		{
			odd_count++;
			 } 	
	}
	printf("total number of even number in array=%d\n",even_count);
	printf(" total number of odd number in array=%d\n",odd_count);
	getch();	
}