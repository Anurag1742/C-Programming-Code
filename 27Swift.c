#include<stdio.h>
int main(){
    int x, y;
    printf("Read the integer from keyboard: ");
    scanf("%d", &x);
    x <<= 2; // left swift operator
    y = x;
    printf("the left shifted data is = %d", y);
    return 0;
}