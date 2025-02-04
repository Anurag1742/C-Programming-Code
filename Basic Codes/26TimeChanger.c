#include<stdio.h>
int main(){
    int ts, h, m, s;
    printf("Enter total sec: ");
    scanf("%d",&ts);
    h = ts/3600;
    ts = ts%3600;
    m = ts/60;
    s = ts%60;
    printf("Hour = %d, Min = %d, Sec = %d", h, m, s);
    return 0;
}