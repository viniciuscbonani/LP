#include <stdio.h>
int main(){
    float comprim, larg, altu, parede1, parede2, chao, total;
    printf("Insira as seguintes medidas da cosinha:\nComprimento: ");
    scanf("%f", &comprim);
    printf("Largura: ");
    scanf("%f", &larg);
    printf("Altura: ");
    scanf("%f", &altu);
    parede1 = comprim*altu;
    parede2 = larg*altu;
    chao = larg*comprim;
    total = (2*parede1) + (2*parede2) + (2*chao);
    printf("Como sao %.2fm2, serao necessarios %.2f pisos de 1.5m2",total, total/1.5);
}