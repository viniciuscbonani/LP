#include <stdio.h>

int main(){
    int n;
    printf("Escreva um valor: ");
    scanf("%i", &n);
    if(n >= 0){
        printf("O valor e POSITIVO!");
    }
    else{
        printf("O valor e NEGATIVO");
    }
}