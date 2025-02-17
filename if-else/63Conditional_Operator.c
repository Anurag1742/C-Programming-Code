//Find maximum among three using conditional operator

#include<stdio.h>
void main()
{
     int a,b,c;
     printf("Enter three numbers : "); 
     scanf("%d%d%d",&a,&b,&c);
     printf("Max is: %d",a>b?a>c?a:c:b>c?b:c);
}