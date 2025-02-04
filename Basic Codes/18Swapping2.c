#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Before Swapping: A = %d, B = %d\n", a, b);
    // without using third variable
    a=b+a;
    b=a-b;
    a=a-b;
    printf("After Swapping: A = %d, B = %d", a, b);
    getch();
}