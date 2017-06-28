#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("enter the number");
scanf("%",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the number of digits=%d",count);
getch();
}
