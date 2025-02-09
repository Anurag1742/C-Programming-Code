#include<stdio.h>
#include<conio.h>

int main(){
    int a = 100, b;

    b = sizeof(a);
    printf("Size of a = %d\n", b);

    b = sizeof(double);
    printf("Size of double = %d\n", b);

    b = sizeof(123L);
    printf("Size of 123L = %d\n", b);

    b = sizeof(123.45);
    printf("Size of 123.45 = %d\n", b);

    b = sizeof(123.45f);
    printf("Size of 123.45f = %d\n", b);

    getch();
    return 0;
}
