#include <stdio.h>
int main(){
    float f,c;
    printf("Enter F value: ");
    scanf("%f",&f);
    printf("Enter C value: ");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("fahrenheit = %f", f);

    return 0;
}