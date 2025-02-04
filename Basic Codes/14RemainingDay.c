#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,r;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    b = a/30;
    printf("Month: %d", b);
    r = a%30;
    printf("\nRemaining Days: %d", r);
    getch();
}