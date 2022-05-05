#include<stdio.h>
#include<conio.h>
int test();
void main()
{
	 test();
	printf("%d\n",test(100,199));
	printf("%d\n",test(250,300));
	printf("%d\n",test(105,190));
	
}
int test(int x, int y)
{
	return(x>=100 &&x <=200||y>=100 &&y <=200);
	getch();
}