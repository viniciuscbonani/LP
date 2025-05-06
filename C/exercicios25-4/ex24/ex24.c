#include <stdio.h>

int main(){
    int ncompra;
    float preço;
    printf("Quantas maçãs voce quer comprar: ");
    scanf("%i", &ncompra);
    if(ncompra >= 12){
        preço = 1;
    }
    else{
        preço = 1.3;
    }
    printf("O valor das %i maças é de R$%.2f", ncompra, preço*ncompra);
    return 0;
}