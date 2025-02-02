#include<stdio.h>
#include<conio.h>
int main(){
    int r, p;
    float a;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    r = a;
    printf("Total Rupees: %d\n", r);
    p = (a-r)* 100;
    printf("Total Paise: %d", p);
    getch();
}