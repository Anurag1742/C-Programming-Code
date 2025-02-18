//Program to print table of a number using functions.

#include<stdio.h>
#include<conio.h>
void main()
{

  int n,i,r;
  printf("Enter a no for table: ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    r=n*i;
    printf("%dx%d=%d\n",n,i,r);
  }

 getch();
}