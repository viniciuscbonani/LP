#include <stdio.h>
int main(){
    float custo;
    printf("Custo de fabrica: ");
    scanf("%f", &custo);
    printf("O custo final e de R$%.2f", custo*1.28*1.45);
}