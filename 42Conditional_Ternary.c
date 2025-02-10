#include<stdio.h>
#include<conio.h>

void main(){
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    printf("\nMaximum Value is: %d", max);
    getch();
}