#include<stdio.h>
#include<conio.h>
void main()
{
int i;
  clrscr();
  scanf("%d",&i);
  if(i>0)
    printf("positive");
  if(i<0)
    printf("negative");
  if(i==0)
    printf("zero");
getch();
}
