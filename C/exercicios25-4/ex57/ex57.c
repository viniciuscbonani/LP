/*#include <stdio.h>
int main(){
  float n1, n2, n3, Nmenor, Nmedio, Nmaior;
  printf("Número 1: ");
  scanf("%f", &n1);
  printf("Número 2: ");
  scanf("%f", &n2);
  printf("Número 3: ");
  scanf("%f", &n3);
  if (n1 > n2 && n1 > n3){
    Nmaior = n1;
    if (n2 > n3){
      Nmedio = n2;
      Nmenor = n3;
    }
    else{
      Nmedio = n3;
      Nmenor = n2;
    }
  }
  if (n2 > n1 && n2 > n3){
    Nmaior = n2;
    if (n1 > n3){
      Nmedio = n1;
      Nmenor = n3;
    }
    else{
      Nmedio = n3;
      Nmenor = n1;
    }
  }
  if (n3 > n1 && n3 > n2){
    Nmaior = n3;
    if (n1 > n2){
      Nmedio = n1;
      Nmenor = n2;
    }
    else{
      Nmedio = n2;
      Nmenor = n1;
    }
  }
  printf("Os valores em ordem DECRESCENTE: %.1f, %.1f e %.1f", Nmaior, Nmedio, Nmenor);
}*/