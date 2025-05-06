#include <stdio.h>
int main(){
  float a1, a2, a3;
  printf("Ângulo 1: ");
  scanf("%f", &a1);
  printf("Ângulo 2: ");
  scanf("%f", &a2);
  printf("Ângulo 3: ");
  scanf("%f", &a3);
  if (a1 == 90 || a2 == 90 || a3 == 90)
    printf("É um triângulo Retângulo");
  else
    if (a1 > 90 || a2 > 90 || a3 > 90)
      printf("É um triângulo Obtusângulo");
    else
      printf("É um triângulo Acutângulo");
}