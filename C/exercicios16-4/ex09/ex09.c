#include <stdio.h>

int main(){
    int lado;
    printf("Insira um lado do quadrado: ");
    scanf("%i", &lado);
    printf("O dobro da area do quadrado: %i", (lado*lado)*2);
}