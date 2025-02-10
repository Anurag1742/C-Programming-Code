#include<stdio.h>
#include<conio.h>

int main(){
    int w,x,y,z,p;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &w, &x, &y, &z);

    p = (w + x) / (y - z);

    printf("\n Value of p is: %d", p);
    getch();
}