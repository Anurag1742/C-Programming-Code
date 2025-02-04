#include<stdio.h>
double harmonicSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a psitive integer. \n");
        return 1;
    }

    double result = harmonicSum(n);
    printf("The sum of the harmonic series foor n = %d is: %.6f\n",n, result);

    return 0;
}