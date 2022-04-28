#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char name1[40];
printf("enter name in lowercase\n");
scanf("%s",name1);
for(i=0;name1[i]!='\0';i++)
{
	printf("%c",name1[i]-32);
}
getch();
}