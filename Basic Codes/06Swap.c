#include<stdio.h>

int main() {

    int num1 , num2, temp;
    printf("Enter num1 :- ");
    scanf("%d", &num1);
    printf("Enter num2 :- ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After Swapping :- num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}