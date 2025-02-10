#include<stdio.h>
#include<conio.h>

int main(){
    int intv = 20000;

    intv = ( (long) intv * 10) / 20;
    printf("Value of intv: %d", intv);
    getch();
}