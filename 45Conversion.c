//  Automatic or imlicit type conversion
#include <stdio.h> 
#include <conio.h>

int main(){
    int a = 10, b = 20;
    float c = 10.50;
    long d = 20L, e;

    e = ((a + c ) * d) + b;
    printf("Value of e: %ld", e);
    getch();
}