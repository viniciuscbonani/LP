#include <stdio.h>
int main(){
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um segundo numero: ");
    scanf("%f", &n2);
    if (n1 > n2)
        printf("O maior numero e o %.2f.", n1);
    else
        printf("O maior numero e o %.2f.", n2);
}