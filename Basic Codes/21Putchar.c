#include<stdio.h>
#include<conio.h>
int main(){
    char a,b;
    printf("Enter one lowercase character: ");
    a = getchar();
    printf("Input lowercase character ==> ");
    putchar(a);
    printf("\ncharacter in uppercase : ");
    putchar(a-32);
    getch();
}