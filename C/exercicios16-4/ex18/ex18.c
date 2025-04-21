#include <stdio.h>
int main(){
    float potencia, largura, comprim, qntlamp;
    printf("Potencia da lampada: ");
    scanf("%f", &potencia);
    printf("Largura do comodo: ");
    scanf("%f", &largura);
    printf("Comprimento: ");
    scanf("%f", &comprim);
    qntlamp = (largura*comprim*18)/potencia;
    printf("A quantidade de lampadas e %.0f", qntlamp);
}