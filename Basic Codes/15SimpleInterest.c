#include<stdio.h>
#include<conio.h>
int main(){
    float i, p, r, n;
    printf("Enter the value p: ");
    scanf("%f", &p);
    printf("Enter the value r: ");
    scanf("%f", &r);
    printf("Enter the value n: ");
    scanf("%f", &n);
    i = (p * r * n) / 100;
    printf("Simple Interest: %.2f", i);
    getch();
}