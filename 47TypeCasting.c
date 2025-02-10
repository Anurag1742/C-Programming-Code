#include<stdio.h>
#include<conio.h>

int main(){
    float a;
    int x = 10, y = 3;

    a = x / y;
    printf("\n Value of a (without casting) : %f", a);

    a = (float) x / y;
    printf("\n Value of a (with casting) : %f", a);

    getch();
}