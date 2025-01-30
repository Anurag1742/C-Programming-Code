#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("Enter 1st num :- ");
    scanf("%d",&a);
    printf("Enter 2nd num :- ");
    scanf("%d",&b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    
    printf("Sum :- %d\nSubtract :- %d\nMultiplication :- %d\nProduct :- %d\nQuotient :- %d",c,d,e,f,g);
    getch();
}