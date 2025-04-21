#include <stdio.h>
int main(){
    float carvendidos, valorvendas, salariofixo, valorporcar, salariototal;
    printf("Numero de carros vendidos: ");
    scanf("%f", &carvendidos);
    printf("Valor das vendas: ");
    scanf("%f", &valorvendas);
    printf("Salario Fixo: ");
    scanf("%f", &salariofixo);
    printf("Valor por Carro: ");
    scanf("%f", &valorporcar);
    salariototal = (salariofixo + carvendidos*valorporcar)*1.05;
    printf("O salario sera R$%.2f.", salariototal);
}