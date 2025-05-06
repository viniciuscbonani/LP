#include <stdio.h>
int main(){
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um segundo numero: ");
    scanf("%f", &n2);
    if (n1 > n2)
        printf("A ordem crescente e: %.2f, %.2f", n2, n1);
    else
        printf("A ordem crescente e: %f, %f.", n1, n2);
}