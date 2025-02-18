#include<stdio.h>
#include<conio.h>

void main(){
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
    getch();
}