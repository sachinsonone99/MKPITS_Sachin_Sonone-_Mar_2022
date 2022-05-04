#include<stdio.h>
#include<conio.h>
int test();
void main()
{
test();
printf("%d",test(78,95));
printf("\n%d",test(95,95));
printf("\n%d",test(99,70));
}
int test(int x,int y)
{
int n=100;
int val1=abs(x-n);
int val2=abs(y-n);
return val1==val2 ? 0 :(val1<val2 ?x:y);
getch();
}
