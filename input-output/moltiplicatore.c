#include <stdio.h>

int main(){
    float a,b;
    printf("Inserisci un numero: ");
    scanf("%f",&a);
    printf("Inserisci un altro numero: ");
    scanf("%f",&b);
    printf("%.2f * %.2f = %.2f", a,b,a*b);
    return 0;
}
