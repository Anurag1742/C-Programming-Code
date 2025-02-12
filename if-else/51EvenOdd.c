#include<stdio.h>
#include<conio.h>
int main(){
    int a ;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("-------------------------\n");
    if(a % 2 == 0){
        printf("%d is an even number.", a);
    }
    else{
        printf("%d is an odd number.", a);
    }
    getch();
}