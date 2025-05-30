/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 3

int main(){
  int a[N][M], at[M][N];
  srand(time(NULL));
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      a[i][j] = rand()%10;
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      at[i][j] = a[j][i];
      printf("%d\t", at[i][j]);
    }
    printf("\n");
  }
}*/