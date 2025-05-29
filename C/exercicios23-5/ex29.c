#include <stdio.h>
int main(){
  int a[6], cont=0, som=0;
  for (int i=0; i<6; i++){
    printf("Digite o %d° número de A: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("Pares:\n");
  for (int i=0; i<6; i++){
    if (a[i]%2==0){
      printf("%d\n", a[i]);
      cont ++;
    }
  }
  printf("Foram %d números pares\n", cont);
  printf("Ímpares:\n");
  for (int i=0; i<6; i++){
    if (a[i]%2!=0){
      printf("%d\n", a[i]);
      som = som + a[i];
    }
  }
  printf("A soma de números ímpares é de %d", som);
}