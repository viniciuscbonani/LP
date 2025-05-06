/*#include <stdio.h>
int main(){
  float n1, n2, n3, N1, N2, N3;
  printf("numero 1: ");
  scanf("%f", &n1);
  printf("numero 2: ");
  scanf("%f", &n2);
  printf("numero 3: ");
  scanf("%f", &n3);
  if (n1 > n2 && n1 > n3){
    N3 = n1;
    if (n2 > n3){
      N2 = n2;
      N1 = n3;
    }
    else{
      N2 = n3;
      N1 = n2;
    }
  }
  if (n2 > n1 && n2 > n3){
      N3 = n2;
      if (n1 > n3){
        N2 = n1;
        N1 = n3;
      }
      else{
        N2 = n3;
        N1 = n1;
      }
  }
  if (n3 > n1 && n3 > n2){
    N3 = n3;
    if (n1 > n2){
      N2 = n1;
      N1 = n2;
    }
    else{
      N2 = n2;
      N1 = n1;
    }
  }
  printf("A ordem crescente e: %.2f, %.2f, %.2f", N1, N2, N3);
}*/          