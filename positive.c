#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a number");
scanf("%d",&a);
if(a>0)
{
printf(number is positive");
}
else if(a<0)
{
printf("number is negative");
}
else
{
printf("number is zero");
}
getch();
}
