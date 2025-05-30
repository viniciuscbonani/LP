#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 4

int main(){
  int a[N][M];
  srand(time(NULL));
  for (int i=0;i<N;i++){
    for (int j=0;j<M;j++){
      a[i][j] = (rand()%20)+1;
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i=0;i<N;i++){
    for (int j=0; j<M;j++){
      if (j>i)
        a[i][j] = 0;]);
    }
    printf("\n");
      printf("%d\t", a[i][j
  }
}