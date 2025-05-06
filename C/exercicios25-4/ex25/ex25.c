#include <stdio.h>

int main(){
    float n1, n2, media;
    printf("Digite as notas para consultar a aprovação:\nNota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    media = (n1 + n2)/2;
    printf("Com a média de %.2f, o aluno está: ", media);
    if(media >= 6){
        printf("APROVADO\n");
    }
    else{
        printf("REPROVADO\n");
    }
}