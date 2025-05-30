#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 3
#define N 3

int main(){
  int a[M][N], soma=0;
  srand(time(NULL));
  for (int i=0; i<3;i++){
    for (int j=0; j<3;j++){
      a[i][j] = rand()%10;
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  for (int i=1; i<N;i++){
    for (int j=0; j<i;j++){
      soma += a[i][j];
    }
  }
  printf("Soma: %d", soma);
}