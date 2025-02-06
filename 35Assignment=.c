#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d;
    a = 10;
    b = a;
    c = a + b;

    d = 10;
    d = d + 10; // equiivalent to d += 10.
    printf("\n a = %d, b = %d", a, b);
    printf("\n c = %d, d = %d", c, d);

    getch();
    return 0;
}