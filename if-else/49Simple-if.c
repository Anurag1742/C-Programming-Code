#include<stdio.h>
#include<conio.h>
int main(){
    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    if(x > 100){
        printf("\nNumber is greater then 100.");
        
    }
    
    getch();
    return 0;
}