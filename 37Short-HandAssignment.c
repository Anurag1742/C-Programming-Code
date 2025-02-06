#include<stdio.h>
#include<conio.h>
int main(){
    int num = 10;

    printf(" Num : %d", num);

    num += 10;
    printf(" \nNum += 10 : %d", num);
    num -= 5;
    printf(" \nNum -= 5 : %d", num);
    num *= 2;
    printf(" \nNum *= 2 : %d", num);
    num /= 3;
    printf(" \nNum /= 3 : %d", num);
    num %= 3;
    printf(" \nNum %= 3 : %d", num);

    getch();
    return 0;
}