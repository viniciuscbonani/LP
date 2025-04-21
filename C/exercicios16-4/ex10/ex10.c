#include <stdio.h>
int main(){
    float salarioh, salario;
    int horas;
    printf("Digite seu salario por hora: ");
    scanf("%f", &salarioh);
    printf("Digite sua quantidade de horas trabalhadas: ");
    scanf("%i", &horas);
    salario = salarioh*horas;
    printf("Seu salario e de R$%.2f", salario);
}