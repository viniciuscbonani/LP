/*#include <stdio.h>
int main(){
  float n[5];
  int cod;
  for (int i=0; i<5; i++){
    printf("Insira o %d° valor: ", i+1);
    float val;
    scanf("%f", &val);
    n[i] = val;
  }
  printf("Insira o código: ");
  scanf("%d", &cod);
  while (cod != 0 && cod != 1 && cod != 2){
    printf("Código Inválido.\nInsira novamente: ");
    scanf("%d", &cod);
  }
  if (cod == 1){
    for (int i = 0; i < 5; i++){
      printf("N[%d] = %.1f\n", i, n[i]);
    }
  }
  if (cod == 2){
    for (int i = 4; i >= 0; i--){
      printf("N[%d] = %.1f\n", i, n[i]);
    }
  }
}*/