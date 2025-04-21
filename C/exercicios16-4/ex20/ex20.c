#include <stdio.h>
int main(){
    float kmcomeco, kmfinal, litros, valorrecebido, kmlitro, lucro;
    printf("Para calcular o rendimento do dia, insira os dados:\nKilometragem inicial: ");
    scanf("%f", &kmcomeco);
    printf("Kilometragem final: ");
    scanf("%f", &kmfinal);
    printf("Litros de combustivel gasto: ");
    scanf("%f", &litros);
    printf("Valor recebido dos passageiros: ");
    scanf("%f", &valorrecebido);
    kmlitro = (kmfinal - kmcomeco)/litros;
    lucro = valorrecebido - (litros*2.9);
    printf("Kilometros/litro: %.2f\nLucro do dia: R$%.2f", kmlitro, lucro);
}