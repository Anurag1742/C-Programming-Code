#include<stdio.h>
#include<conio.h>
void main(){
    int n;

    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("1 = True And 0 = false");
    
    printf("\n(n < 10) is = %d", (n < 10) );
    printf("\n(n > 10) is = %d", (n > 10) );
    printf("\n(n <= 10) is = %d", (n <= 10) );
    printf("\n(n >= 10) is = %d", (n >= 10) );
    printf("\n(n == 10) is = %d", (n == 10) );
    printf("\n(n != 10) is = %d", (n != 10) );

    getch();
}