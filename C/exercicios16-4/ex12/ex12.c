#include <stdio.h>
int main(){
    float salario, reaj;
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Reajuste: ");
    scanf("%f", &reaj);
    printf("O novo salario reajustado: R$%.2f", salario*reaj);
}