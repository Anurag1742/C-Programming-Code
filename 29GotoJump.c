#include<stdio.h>
#include<conio.h>
void main(){
    int a = 10;

    printf(" Nils Patel");

    if(a == 10){
        goto LABEL;
    }
    printf("This simple");
    printf("Program");

    LABEL:
    printf("\n go to statement");
    printf("\n Forword jump");
    getch();

}