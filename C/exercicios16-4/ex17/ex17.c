#include <stdio.h>

int main(){
    float raio, area;
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.1415 * raio * raio;
    printf("A area e %.2f", area);
}