#include<stdio.h>
#include<conio.h>
#define PI 3.142
void main() {
    float r, a;
    printf("Enter Radius: ");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area of Circle: %.2f", a);
    getch();
}