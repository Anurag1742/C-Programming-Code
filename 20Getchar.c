#include<stdio.h>
#include<conio.h>
void main(){
    char a,b;

    printf("Enter one character: ");
    scanf("%c", &a);
    printf("Input character ==> %c ",a);
    fflush(stdin);  // to clear the input buffer
    printf("\n Enter second character: ");
    b= getchar();
    printf("ASCII value of character(%c) is %d", b, b);
    getch();
}