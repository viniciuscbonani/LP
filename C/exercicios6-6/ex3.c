/*#include <stdio.h>
#include <string.h>

int main(){
  char a[100], b[100], c[100], d[100];
  int k=0, posi, posf;
  printf("A) Insira uma frase: ");
  fgets(a, sizeof(a), stdin);
  a[strcspn(a, "\n")] = '\0';
  printf("B) Termos que serão substituídos: ");
  fgets(b, sizeof(b), stdin);
  b[strcspn(b, "\n")] = '\0';
  printf("C) Substituidos por: ");
  fgets(c, sizeof(c), stdin);
  c[strcspn(c, "\n")] = '\0';
  for (int i =0;i<strlen(a); i++){
    if (a[i]==b[0]){
      posi = i;
      for (int j=1; j<strlen(b); j++){
        if (a[i++] == b[j]){
          k++;
        }
        else{
          posf = i;
          break;
        }
      }
      if (k==strlen(b)){
        for (int l=posi; l<posf; l++){
          d
        }
      }
    }
  }
  d[strcspn(d, b)] = c;
  printf("%s\n", d);
}*/

#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], c[100], d[100];
    int cont=0, lena, k=0;
    printf("a: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1] = '\0';

    printf("b: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b)-1] = '\0';

    printf("c: ");
    fgets(c, sizeof(c), stdin);
    c[strlen(c)-1] = '\0';
    lena = strlen(a);
    for (int i=0; i<lena; i++){
        for (int  j=0; j<strlen(b); j++){
            if (a[i+j] != b[j])
                break;
            else{
                cont++;
            }
        }
        if (cont == 4){
            for (int z=0; z<strlen(c); z++){
                d[k++] = c[z];
            }
        }
    }
    printf("%s", d);   
}