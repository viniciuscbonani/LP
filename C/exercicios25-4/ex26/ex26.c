#include <stdio.h>
int main(){
    int anonasc;
    printf("Qual seu ano de nascimento: ");
    scanf("%i", &anonasc);
    if(2025 - anonasc){
        printf("Você PODE votar esse ano");
    }
    else{
        printf("Você NÃO PODE votar esse ano");
    }
}