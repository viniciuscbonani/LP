#include <stdio.h>
int main(){
    int ano, mes, dia;
    printf("Anos: ");
    scanf("%i", &ano);
    printf("Meses: ");
    scanf("%i", &mes);
    printf("dia: ");
    scanf("%i", &dia);
    printf("Voce ja viveu %i dias", (ano*365)+(mes*30)+dia);
}