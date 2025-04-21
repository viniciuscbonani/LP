#include <stdio.h>
int main(){
    float tamanhopista, kmlitro, tamanhototal, nlitros, nlitmin;
    int nvoltas, nreabast;
    printf("Insira os seguintes dados:\nTamanho da pista: ");
    scanf("%f", &tamanhopista);
    printf("Km/L: ");
    scanf("%f", &kmlitro);
    printf("Numero de voltas: ");
    scanf("%i", &nvoltas);
    printf("Numero de reabastecimentos: ");
    scanf("%i", &nreabast);
    tamanhototal = tamanhopista * nvoltas;
    nlitros = tamanhototal/kmlitro;
    nlitmin = nlitros/nreabast;
    printf("Com um percurso total de %.2fkm numero minimo de litros por parada e %.2f",tamanhototal, nlitmin);
}