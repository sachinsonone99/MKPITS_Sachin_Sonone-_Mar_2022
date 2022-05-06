#include<stdio.h>
#include<conio.h>
int test();
int abs();
void main()
{
	test();
	printf("%d",test(11, 21, 31));
    printf("\n%d",test(11, 22, 31));
    printf("\n%d",test(10, 20, 15));
    }       
    int test(int x, int y, int z)
         {
             return abs(x - y) >= 20 || abs(x - z) >= 20 || abs(y - z) >= 20;
         getch();
		 }