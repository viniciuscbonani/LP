/*#include <stdio.h>
int main(){
  int a[10];
  for (int i=0; i<10; i++){
    printf("Digite o %d° número de A: ", i+1);
    scanf("%d", &a[i]);
  }
  for (int i=0; i<10; i++){
    int cont=0;
    for (int j=2; j<a[i]; j++){
      if (a[i]%j==0)
        cont++;
    }
    if (cont==0)
      printf("A[%d] = %d é primo\n", i, a[i]);
  }
}*/