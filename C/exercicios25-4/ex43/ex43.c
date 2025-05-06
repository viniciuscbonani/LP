/*#include <stdio.h>
int main(){
  char tipo;
  float litros, valor;
  printf("POSTO DE COMBUSTÍVEL\nCombustível(A ou G): ");
  scanf(" %c", &tipo);
  printf("Quantidade em litros: ");
  scanf("%f", &litros);
  if (tipo == 'G')
    if (litros <= 20)
      valor = litros*0.96*3.3;
    else
      valor = litros*0.94*3.3;
  else
    if (litros <= 20)
      valor = litros*0.97*2.9;
    else
      valor = litros*0.95*2.9;
  printf("O valor final será de R$%.2f", valor);
}*/  