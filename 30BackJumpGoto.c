#include<stdio.h>
#include<conio.h>
void main(){
    int i ;
    i=1;
    Label:
    printf(" %d", i);
    i++;
    if(i <= 10){
        goto Label;
    }
    getch();
    
}