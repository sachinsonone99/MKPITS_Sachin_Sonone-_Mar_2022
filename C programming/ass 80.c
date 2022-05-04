#include<stdio.h>
#include<conio.h>
int test();
int main(void)
 
{
  test();
	printf("%d",test(120,-1));
	printf("\n%d",test(-1,100));
	printf("\n%d",test(2,120));
}
int test(int temp1,int temp2)
{
	return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}