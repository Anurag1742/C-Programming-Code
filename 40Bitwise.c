#include<stdio.h>
#include<conio.h>
int main(){
    int a =3, b = 6, c;

    printf("a = %d\nb = %d\n", a, b);
    c = a & b;
    printf("a & b = %d\n", c);

    c = a | b;
    printf("a | b = %d\n", c);

    c = a ^ b;
    printf("a ^ b = %d\n", c);

    c = ~a;
    printf("~a = %d\n", c);

    c = a << 3;
    printf("a << 2 = %d\n", c);

    c = b >> 2;
    printf("a >> 2 = %d\n", c);

    getch();
    return 0;
}