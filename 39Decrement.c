#include<stdio.h>
#include<conio.h>
int main(){
    int a = 10, b;

    b = --a;
    printf("After Prefix Decrement  : ");
    printf("a = %d, b = %d\n", a, b);

    a = 10;
    b = a--;
    printf("\nAfter Postfix Decrement : ");
    printf("a = %d, b = %d\n", a, b);

    getch();
}