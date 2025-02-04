#include <stdio.h>
int main() {
    int num, d1, d2, sum;
    printf("Enter a valid two digit number: \n");
    scanf("%d", &num);

    if(num < 10 || num > 99) {
        printf("Please enter a valid two digit number.\n");
        return 1;
    }
    d1 = num / 10;
    d2 = num % 10;
    sum = d1 + d2;

    printf("The sum of the digits of %d is %d\n", num, sum);
    return 0;
}