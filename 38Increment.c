#include<stdio.h>
#include<conio.h>
int main(){
    int a = 10, b;

    b = ++a;
    printf("After Prefix Increment  : ");
    printf("a = %d, b = %d\n", a, b);

    a = 10;
    b = a++;
    printf("\nAfter Postfix Increment : ");
    printf("a = %d, b = %d\n", a, b);

    getch();
}