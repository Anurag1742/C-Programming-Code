#include<stdio.h>
int main(){
    int number, temonum;
    printf("Enter an integer: ");
    scanf("%ld", &number);
    temonum = number;
    number = number << 2;
    printf("%ld X 4 = %ld", temonum, number);
    return 0;
}