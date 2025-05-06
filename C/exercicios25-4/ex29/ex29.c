#include <stdio.h>
int main(){
    int horafim, horainicio, duracao;
    printf("Horario de inicio da partida: ");
    scanf("%i", &horainicio);
    printf("Horario de fim da partida: ");
    scanf("%i", &horafim);
    if(horafim < horainicio){
        duracao = (horafim + 24) - horainicio;
        printf("A duracao total da partida foi de %i horas.", duracao);
    }
    else{
        if (horafim == horainicio)
            printf("A partida tem 24 horas e nao e valida");
        else{
            duracao = horafim - horainicio;
            printf("A duracao total da partida foi de %i horas.", duracao);
        }
    }
}