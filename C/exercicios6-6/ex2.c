/*#include <stdio.h>
#include <string.h>

int main(){
  char a[30], b[30], c[60];
  int i=0, j=0, k=0;
  printf("A: ");
  fgets(a, sizeof(a), stdin);
  //a[strlen(a)-1] = '\0'; #não compensa usar isso
  a[strcspn(a, "\n")] = '\0';
  printf("B: ");
  fgets(b, sizeof(b), stdin);
  b[strcspn(b, "\n")] = '\0';
  while (a[i] != '\0' || b[j] != '\0') {
    if (a[i] != '\0') {
        c[k++] = a[i++];
    }
    if (b[j] != '\0') {
        c[k++] = b[j++];
    }
  }
  c[k] = '\0';
  for (int i=0; i<=strlen(c); i++){
    printf("%c", c[i]);
  }  
}*/
//’QSueagrutnada’.