#include <stdio.h>
int main(){
    int total, branco, nulo, valido;
    printf("Digite os seguintes dados sobre os votos:\ntotais: ");
    scanf("%i", &total);
    printf("brancos: ");
    scanf("%i", &branco);
    printf("Nulos: ");
    scanf("%i", &nulo);
    printf("Validos: ");
    scanf("%i", &valido);
    printf("Os votos representando cada porcao dos %i votos:\nBranco: %.2f%%\nNulo: %.2f%%\nValidos: %.2f%%", total, 100.0*branco/total, 100.0*nulo/total, 100.0*valido/total);
}