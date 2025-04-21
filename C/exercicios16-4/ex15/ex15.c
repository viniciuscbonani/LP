#include <stdio.h>
int main(){
    float grausf, grausc;
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &grausf);
    grausc = 5 * (grausf - 32) / 9;
    printf("A temperatura em celsius e: %.2foC", grausc);
}