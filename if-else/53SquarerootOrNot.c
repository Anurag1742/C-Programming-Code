#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n, a;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    a = sqrt(n);
    if(n-(a*a)==0){
        printf("\nIt is Perfect Square.");
    }
    else{
        printf("\nIt is not Perfect Square.");
    }
    getch();
}