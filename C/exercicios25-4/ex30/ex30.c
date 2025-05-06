#include <stdio.h>
int main(){
    float horasmes, salariohora, total;
    printf("Calculadora de salario:\nDigite as horas trabalhadas no mes: ");
    scanf("%f", &horasmes);
    printf("Digite o salario por hora: ");
    scanf("%f", &salariohora);
    if (horasmes <= 160){
        total = horasmes*salariohora;
        printf("Esse mes nao teve horas extras e seu salario foi de R$%.2f", total);
    }
    else{
        total = (160*salariohora) + (horasmes-160)*1.5*salariohora;
        printf("Esse mes teve %.2f horas extras e seu salario foi de R$%.2f", (horasmes-160), total);    
    }
}