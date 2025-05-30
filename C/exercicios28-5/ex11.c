/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 3

int main(){
  int a[N][M], soma=0;
  srand(time(NULL));
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      a[i][j] = rand()%10;
      printf("%d\t", a[i][j]);
      if (i+j==N-1){
        soma += a[i][j];
      }
    }
    printf("\n");
  }
  printf("Soma: %d", soma);
}*/

//0-2, 1-1, 2-0